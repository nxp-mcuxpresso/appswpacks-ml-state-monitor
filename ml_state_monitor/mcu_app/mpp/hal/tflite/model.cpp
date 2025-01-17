/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.
   Copyright 2021-2024 NXP

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

/* File modified by NXP. Changes are described in file
   /middleware/eiq/tensorflow-lite/readme.txt in section "Release notes" */

#include <stdio.h>
#include "hal_valgo_dev.h"
#include "tensorflow/lite/micro/kernels/micro_ops.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/schema/schema_generated.h"

#include "fsl_debug_console.h"
#include "model.h"
#include "limits.h"
#include "tensorarena_config.h"

/* TODO replace by dynamic object construction to allow multiple instances to run concurrently */
static tflite::ErrorReporter* s_errorReporter = nullptr;
static const tflite::Model* s_model = nullptr;
static tflite::MicroInterpreter* s_interpreter = nullptr;
static TfLiteTensor* inputTensor;

extern tflite::MicroOpResolver &MODEL_GetOpsResolver();

// An area of memory to use for input, output, and intermediate arrays.
// (Can be adjusted based on the model needs.)
constexpr int kTensorArenaSize = HAL_TFLM_TENSOR_ARENA_SIZE_B;
static uint8_t s_tensorArena[kTensorArenaSize] __ALIGNED(16);

status_t MODEL_Init(const void *model_data, int model_size)
{
    // Map the model into a usable data structure. This doesn't involve any
    // copying or parsing, it's a very lightweight operation.
    s_model = tflite::GetModel(model_data);
    if (s_model->version() != TFLITE_SCHEMA_VERSION)
    {
        PRINTF("Model provided is schema version %d not equal "
               "to supported version %d.",
               s_model->version(), TFLITE_SCHEMA_VERSION);
        return kStatus_Fail;
    }

    // Pull in only the operation implementations we need.
    // This relies on a complete list of all the ops needed by this graph.
    // An easier approach is to just use the AllOpsResolver, but this will
    // incur some penalty in code space for op implementations that are not
    // needed by this graph.
    //
    // tflite::AllOpsResolver resolver;
    // NOLINTNEXTLINE(runtime-global-variables)
    tflite::MicroOpResolver &micro_op_resolver = MODEL_GetOpsResolver();

    // Build an interpreter to run the model with.
    static tflite::MicroInterpreter static_interpreter(
        s_model, micro_op_resolver, s_tensorArena, kTensorArenaSize);
    s_interpreter = &static_interpreter;

    // Allocate memory from the tensor_arena for the model's tensors.
    TfLiteStatus allocate_status = s_interpreter->AllocateTensors();
    if (allocate_status != kTfLiteOk)
    {
        PRINTF("AllocateTensors() failed");
        return kStatus_Fail;
    }

    // Get information about the memory area to use for the model's input.
    inputTensor = s_interpreter->input(0);

    return kStatus_Success;
}

status_t MODEL_RunInference(void)
{
    if (s_interpreter->Invoke() != kTfLiteOk)
    {
        printf("Invoke failed!\r\n");
        return kStatus_Fail;
    }

    return kStatus_Success;
}

uint8_t* GetTensorData(TfLiteTensor* tensor, mpp_tensor_dims_t* dims, mpp_tensor_type_t* type)
{
    switch (tensor->type)
    {
        case kTfLiteFloat32:
            *type = MPP_TENSOR_TYPE_FLOAT32;
            break;
        case kTfLiteUInt8:
            *type = MPP_TENSOR_TYPE_UINT8;
            break;
        case kTfLiteInt8:
            *type = MPP_TENSOR_TYPE_INT8;
            break;
        default:
            assert("Unknown input tensor data type");
    };

    dims->size = tensor->dims->size;
    assert(dims->size <= MAX_TENSOR_DIMS);
    for (int i = 0; i < tensor->dims->size; i++)
    {
        dims->data[i] = tensor->dims->data[i];
    }

    return tensor->data.uint8;
}

uint8_t* MODEL_GetInputTensorData(mpp_tensor_dims_t* dims, mpp_tensor_type_t* type)
{
    return GetTensorData(inputTensor, dims, type);
}

uint8_t* MODEL_GetOutputTensorData(mpp_tensor_dims_t* dims, mpp_tensor_type_t* type, int idx)
{
    /* handles multiple outputs */
    TfLiteTensor* outputTensor = s_interpreter->output(idx);

    return GetTensorData(outputTensor, dims, type);
}


void MODEL_NormalizationInput(float* data, mpp_tensor_dims_t* dims, mpp_tensor_type_t type, float* mean, float* std)
{
    switch (type)
    {
        case MPP_TENSOR_TYPE_UINT8:
            break;
        case MPP_TENSOR_TYPE_INT8:
            break;
        case MPP_TENSOR_TYPE_FLOAT32:
        	for (uint32_t i = 0 ; i < dims->data[1]; i++)
        	{
        		for (uint32_t j = 0 ; j < dims->data[3]; j++)
        		{
        			(data)[dims->data[3]*i+j] =(data[dims->data[3]*i+j]) - mean[j] ;
        			(data)[dims->data[3]*i+j] =(data[dims->data[3]*i+j]) / std[j];
        		}
        	}

            break;
        default:
            assert("Unknown input tensor data type");
    }
}
void MODEL_ConvertInput(uint8_t* data, mpp_tensor_dims_t* dims, mpp_tensor_type_t type, float mean, float std)
{
    int size = dims->data[2] * dims->data[1] * dims->data[3];
    float tmp;
    switch (type)
    {
        case MPP_TENSOR_TYPE_UINT8:
            break;
        case MPP_TENSOR_TYPE_INT8:
            for (int i = size - 1; i >= 0; i--)
            {
                tmp = (data[i] / std) - mean;
                reinterpret_cast<int8_t*>(data)[i] = (int8_t)tmp;
            }
            break;
        case MPP_TENSOR_TYPE_FLOAT32:
            for (int i = size - 1; i >= 0; i--)
            {
                reinterpret_cast<float*>(data)[i] =
                    (static_cast<int>(data[i]) - mean) / std;
            }
            break;
        default:
            assert("Unknown input tensor data type");
    }
}
