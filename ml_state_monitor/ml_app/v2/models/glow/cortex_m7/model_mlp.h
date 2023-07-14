// Bundle API auto-generated header file. Do not edit!
// Glow Tools version: 2022-05-19 (2ee55ec50) (Glow_Release_MCUX_SDK_2.12.0)

#ifndef _GLOW_BUNDLE_MODEL_MLP_H
#define _GLOW_BUNDLE_MODEL_MLP_H

#include <stdint.h>

// ---------------------------------------------------------------
//                       Common definitions
// ---------------------------------------------------------------
#ifndef _GLOW_BUNDLE_COMMON_DEFS
#define _GLOW_BUNDLE_COMMON_DEFS

// Glow bundle error code for correct execution.
#define GLOW_SUCCESS 0

// Memory alignment definition with given alignment size
// for static allocation of memory.
#define GLOW_MEM_ALIGN(size)  __attribute__((aligned(size)))

// Macro function to get the absolute address of a
// placeholder using the base address of the mutable
// weight buffer and placeholder offset definition.
#define GLOW_GET_ADDR(mutableBaseAddr, placeholderOff)  (((uint8_t*)(mutableBaseAddr)) + placeholderOff)

#endif

// ---------------------------------------------------------------
//                          Bundle API
// ---------------------------------------------------------------
// Model name: "model_mlp"
// Total data size: 26752 (bytes)
// Activations allocation efficiency: 1.0000
// Placeholders:
//
//   Name: "Identity"
//   Type: float<1 x 4>
//   Size: 4 (elements)
//   Size: 16 (bytes)
//   Offset: 1536 (bytes)
//
//   Name: "input_1"
//   Type: float<1 x 128 x 1 x 3>
//   Size: 384 (elements)
//   Size: 1536 (bytes)
//   Offset: 0 (bytes)
//
// NOTE: Placeholders are allocated within the "mutableWeight"
// buffer and are identified using an offset relative to base.
// ---------------------------------------------------------------
#ifdef __cplusplus
extern "C" {
#endif

// Placeholder address offsets within mutable buffer (bytes).
#define MODEL_MLP_Identity  1536
#define MODEL_MLP_input_1   0

// Memory sizes (bytes).
#define MODEL_MLP_CONSTANT_MEM_SIZE     25024
#define MODEL_MLP_MUTABLE_MEM_SIZE      1600
#define MODEL_MLP_ACTIVATIONS_MEM_SIZE  128

// Memory alignment (bytes).
#define MODEL_MLP_MEM_ALIGN  64

// Bundle entry point (inference function). Returns 0
// for correct execution or some error code otherwise.
int glow_model_mlp(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations);

#ifdef __cplusplus
}
#endif
#endif
