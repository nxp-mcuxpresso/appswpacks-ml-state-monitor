/*
 * Copyright 2021-2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * API functions public header
 */
#ifndef _MPP_API_H
#define _MPP_API_H

#include "mpp_api_types.h"

/**
 * @defgroup MPP_API MPP API
 *
 * This section provides the detailed documentation for the MCU Media Processing Pipeline API
 *
 * @{
 */

/**
 * Pipeline initialization
 *
 * @param [in] params input_dequeue_frequency ms
 *
 * This function initializes the library and its data structures. <br>
 * It must be called before any other function of the API is called.
 *
 * @return \ref return_codes
 *
 */
int mpp_api_init(uint32_t input_dequeue_frequency);

/**
 * Basic pipeline creation
 *
 * This function returns a handle to the pipeline.
 *
 * @param [in] params pipeline parameters
 * @param [out] ret return code (0 - success, non-zero - error)
 * @return handle to the pipeline if success, NULL if there is an error
 *
 */
mpp_t mpp_create(mpp_params_t *params, int *ret);

/**
 * Camera addition
 *
 * This function adds a camera to the pipeline.
 *
 * @param [in] mpp input pipeline
 * @param [in] name camera driver name
 * @param [in] params parameters to be configured on the camera
 * @param [in] defconfig if set, default camera params are returned
 *                into the params structure
 * @return \ref return_codes
 */
int mpp_camera_add(mpp_t mpp, const char *name, mpp_camera_params_t *params, _Bool defconfig);

/**
 * accelerometer addition
 *
 * This function adds an accelerometer to the pipeline.
 *
 * @param [in] mpp input pipeline
 * @param [in] name accelerometer driver name
 * @param [in] params parameters to be configured on the accelerometer
 * @param [in] defconfig if set, default accelerometer params are returned
 *                into the params structure
 * @return \ref return_codes
 */
int mpp_accelerometer_add(mpp_t mpp, const char *name, mpp_accelerometer_params_t *params, _Bool defconfig);
/**
 * Static accelerometer data addition
 *
 * @param [in] mpp input pipeline
 * @param [in] params static accelerometer parameters
 * @param [in] addr data buffer
 * @param [in] vdset_on_samples number of samples
 * @return \ref return_codes
 *
 * @pre
 * - Image buffer allocation/free is the responsibility of the user.
 *
 */
int mpp_static_accelerometer_add(mpp_t mpp, mpp_static_accel_params_t *params, const void *addr, const unsigned long vdset_samples);
/**
 * Static image addition
 *
 * @param [in] mpp input pipeline
 * @param [in] params static image parameters
 * @param [in] addr image buffer
 * @return \ref return_codes
 *
 * @pre
 * - Image buffer allocation/free is the responsibility of the user.
 *
 */
int mpp_static_img_add(mpp_t mpp, mpp_img_params_t *params, void *addr);

/**
 * Display addition
 *
 * This function adds a display to the pipeline.
 *
 * @param [in] mpp input pipeline
 * @param [in] name display driver name
 * @param [in] params parameters that are configured on the display
 * @return \ref return_codes
 */
int mpp_display_add(mpp_t mpp, const char *name, mpp_display_params_t *params);

/**
 * Sd card addition
 *
 * This function adds an SD card to the pipeline.
 *
 * @param [in] mpp input pipeline
 * @param [in] params parameters that are configured on the SD card
 * @return \ref return_codes
 */
int mpp_sd_add(mpp_t mpp, mpp_sd_params_t *params);

/**
 * Null sink addition
 *
 * This function adds a null-type sink to the pipeline. <br>
 * After this call pipeline is closed and no further elements
 * can be added. Input frames are discarded.
 *
 * @param [in] mpp input pipeline
 * @return \ref return_codes
 */
int mpp_nullsink_add(mpp_t mpp);

/**
 * Add processing element (single input, single output)
 *
 * This function adds an element to the pipeline.
 *
 * Available elements are:
 * - 2D image processing
 * - ML inference engine
 * - Labeled rectangle
 * - Compositor
 *
 * @param [in] mpp input pipeline
 * @param [in] id element id
 * @param [in] params element parameters
 * @param [out] elem_h element handle in pipeline
 * @return \ref return_codes
 */
int mpp_element_add(mpp_t mpp, mpp_element_id_t id, mpp_element_params_t *params, mpp_elem_handle_t *elem_h);

/**
 * Pipeline multiplication
 *
 * @param [in] mpp input pipeline
 * @param [in] num number of output pipeline
 * @param [in] flags selecting the execution type
 * @param [out] out_list list of output pipelines
 * @return \ref return_codes
 *
 * @pre
 * - _out_list_ array must contain at least _num_ elements.
 */
int mpp_split(mpp_t mpp, unsigned int num, mpp_exec_flag_t *flag, mpp_t *out_list);

/**
 * Branching through an element
 *
 * @warning NOT TESTED!
 *
 * @param [in] mpp input pipeline
 * @param [in] id element id
 * @param [in] params element parameters
 * @param [out] out_list output pipelines
 * @param [in] num number of output pipelines
 * @return \ref return_codes
 */
int mpp_element_split(mpp_t mpp,
		              mpp_element_id_t id, mpp_element_params_t *params,
					  mpp_t *out_list, unsigned int num);

/**
 * Join multiple pipelines through an element.
 *
 * The element becomes a source for output pipeline.
 *
 * @warning NOT TESTED!
 *
 * @param [in] in_list list of joined pipelines
 * @param [in] num number of pipelines in the list
 * @param [in] id element id
 * @param [in] params element params
 * @param [out] out output pipeline
 * @return \ref return_codes
 */
int mpp_element_join(mpp_t *in_list, unsigned int num,
                     mpp_element_id_t id, mpp_element_params_t *params,
                     mpp_t out);

/**
 * Update element parameters
 *
 * @param [in] mpp      input pipeline
 * @param [in] elem_h   element handle in the pipeline.
 * @param [in] params   new element parameters
 * @return \ref return_codes
 */
int mpp_element_update(mpp_t mpp, mpp_elem_handle_t elem_h, mpp_element_params_t *params);

/**
 * Start pipeline
 *
 * When called with last=0, this function prepares the branch of the pipeline
 * specified with mpp. <br>
 * When called with last!=0, this function starts the data flow of the pipeline. <br>
 * Data flow should start after all the branches of the pipeline have been prepared.
 *
 * @param [in] mpp pipeline branch handle to start/prepare
 * @param [in] last if non-zero start pipeline processing.
 *         No further start call is possible thereafter.
 * @return \ref return_codes
 */
int mpp_start(mpp_t mpp, int last);

/**
 * Stop a branch of the pipeline
 *
 * This function stops the data processing and peripherals of a pipeline branch.
 *
 * @param [in] mpp pipeline branch to stop
 * @return \ref return_codes
 */
int mpp_stop(mpp_t mpp);

/**
 * Get MPP version
 *
 * @return pointer to the MPP version string
 *
 */
char* mpp_get_version(void);

/** @}*/

#endif
