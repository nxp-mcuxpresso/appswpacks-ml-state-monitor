
#include "tensorflow_model_lcnn_quant.h"

// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.


// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char tensorflow_model_lcnn_quant[] DATA_ALIGN_ATTRIBUTE = {
    0x20, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x00, 0x00, 0x14,
    0x00, 0x20, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00,
    0x00, 0x00, 0x18, 0x00, 0x1c, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x18, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00,
    0x34, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0xb0, 0x07, 0x00, 0x00, 0x74, 0x06, 0x00, 0x00, 0x74, 0x05,
    0x00, 0x00, 0x88, 0x04, 0x00, 0x00, 0x98, 0x03, 0x00, 0x00, 0x14, 0x02, 0x00,
    0x00, 0x8c, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00,
    0x12, 0x00, 0x00, 0x00, 0x48, 0x15, 0x00, 0x00, 0x44, 0x15, 0x00, 0x00, 0x64,
    0x14, 0x00, 0x00, 0x1c, 0x13, 0x00, 0x00, 0x18, 0x12, 0x00, 0x00, 0x20, 0x0a,
    0x00, 0x00, 0x54, 0x09, 0x00, 0x00, 0xa0, 0x08, 0x00, 0x00, 0x04, 0x08, 0x00,
    0x00, 0x24, 0x15, 0x00, 0x00, 0x20, 0x15, 0x00, 0x00, 0x1c, 0x15, 0x00, 0x00,
    0x18, 0x15, 0x00, 0x00, 0x14, 0x15, 0x00, 0x00, 0x10, 0x15, 0x00, 0x00, 0x0c,
    0x15, 0x00, 0x00, 0x08, 0x15, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c,
    0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72,
    0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f,
    0x6e, 0x00, 0x1a, 0xec, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20,
    0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x00, 0x00,
    0x0e, 0x00, 0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14,
    0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
    0x58, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x10, 0x14, 0x00, 0x00, 0xb0, 0x13, 0x00, 0x00, 0xb0, 0x12,
    0x00, 0x00, 0x6c, 0x11, 0x00, 0x00, 0xd4, 0x10, 0x00, 0x00, 0xc8, 0x08, 0x00,
    0x00, 0x14, 0x08, 0x00, 0x00, 0x48, 0x07, 0x00, 0x00, 0xb0, 0x06, 0x00, 0x00,
    0x60, 0x05, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00, 0x74, 0x03, 0x00, 0x00, 0x84,
    0x02, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x74, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x30, 0x06, 0x00, 0x00,
    0xd0, 0x04, 0x00, 0x00, 0xcc, 0x03, 0x00, 0x00, 0x0c, 0x03, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00,
    0x00, 0x1e, 0xfd, 0xff, 0xff, 0x06, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0xfa, 0xff, 0xff, 0x06, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x02, 0x00, 0x00, 0x00, 0xb4, 0xec, 0xff,
    0xff, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65,
    0x6e, 0x74, 0x69, 0x74, 0x79, 0x00, 0x00, 0x00, 0x00, 0x88, 0xec, 0xff, 0xff,
    0xda, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x05, 0x00, 0x00, 0x00, 0x1c,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x82, 0xed,
    0xff, 0xff, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x84, 0xfa, 0xff, 0xff,
    0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x02, 0x00, 0x00, 0x00, 0x78,
    0xfa, 0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x14, 0x00, 0x00, 0x00, 0x0f, 0x00,
    0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x09,
    0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79, 0x31, 0x00,
    0x00, 0x00, 0x70, 0xee, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3b, 0x01, 0x00, 0x00, 0x00,
    0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0xfc, 0xff, 0xff, 0x00,
    0x00, 0x00, 0x08, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0xed, 0xff, 0xff, 0x01, 0x00, 0x00,
    0x00, 0x0d, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0xfb, 0xff, 0xff, 0x00,
    0x00, 0x00, 0x09, 0x14, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x24, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
    0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x38, 0xef, 0xff, 0xff, 0x08, 0x00,
    0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x27, 0x68, 0x24,
    0x3e, 0x01, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x4a, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x08, 0x04,
    0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
    0x00, 0x00, 0x00, 0x04, 0xfc, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xf8, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x09, 0x14, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x78, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
    0x64, 0x00, 0x00, 0x38, 0xf0, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0xd3, 0x1d, 0x3d, 0x01, 0x00, 0x00,
    0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0a, 0x00,
    0x10, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0xf0, 0xfc, 0xff, 0xff, 0x16, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x16, 0x01, 0x00, 0x00, 0x00, 0xe4, 0xfc, 0xff, 0xff, 0x00,
    0x00, 0x00, 0x09, 0x14, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x24, 0x00,
    0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x78, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x66,
    0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x73, 0x68,
    0x61, 0x70, 0x65, 0x00, 0x00, 0xf0, 0xf0, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6e, 0x0c, 0xd2, 0x3b, 0x01,
    0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x0e, 0x00, 0x1a, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x07, 0x00, 0x14,
    0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x02, 0x00, 0x00, 0x00,
    0x3c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x18, 0x00, 0x17, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09,
    0x00, 0x00, 0x00, 0xd8, 0xfd, 0xff, 0xff, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x11, 0x02, 0x00, 0x00, 0x00, 0xcc, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x09, 0x14, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
    0x5c, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x6d, 0x61, 0x78, 0x5f, 0x70, 0x6f, 0x6f, 0x6c, 0x69, 0x6e, 0x67, 0x32, 0x64,
    0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x78, 0x50, 0x6f, 0x6f, 0x6c, 0x00, 0x00, 0x00,
    0x00, 0xf0, 0xf1, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x6e, 0x0c, 0xd2, 0x3b, 0x01, 0x00, 0x00, 0x00, 0x80,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00,
    0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x07, 0x00, 0x14, 0x00, 0x0e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0e,
    0x00, 0x04, 0x00, 0x08, 0x00, 0x0f, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xd4, 0xfe, 0xff, 0xff, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0xc8, 0xfe,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x14, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00,
    0x00, 0x34, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x7d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x8b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64, 0x5f, 0x32,
    0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74,
    0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64, 0x5f,
    0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x3b, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x63, 0x6f, 0x6e,
    0x76, 0x32, 0x64, 0x5f, 0x32, 0x2f, 0x43, 0x6f, 0x6e, 0x76, 0x32, 0x44, 0x3b,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
    0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63,
    0x65, 0x00, 0x50, 0xf3, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x6e, 0x0c, 0xd2, 0x3b, 0x01, 0x00, 0x00, 0x00,
    0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0a, 0x00, 0x0c,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x10, 0x00,
    0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x72,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00,
    0x1c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
    0x14, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x44,
    0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x74,
    0x66, 0x6c, 0x2e, 0x71, 0x75, 0x61, 0x6e, 0x74, 0x69, 0x7a, 0x65, 0x00, 0x00,
    0x00, 0x00, 0x20, 0xf4, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0xe9, 0xef, 0xf2, 0x3b, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0xf3, 0xff, 0xff, 0x04,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x88, 0xff, 0xff, 0xff, 0xa2, 0xfc,
    0xff, 0xff, 0xb0, 0x03, 0x00, 0x00, 0x85, 0xff, 0xff, 0xff, 0xbe, 0xf3, 0xff,
    0xff, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61,
    0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72,
    0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00, 0x00, 0xb8, 0xf4,
    0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x37, 0x4d, 0x10, 0x3a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x56, 0xf4, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0xe2, 0xec, 0x25, 0xfd, 0xfe, 0xfb, 0x0c, 0x16, 0x04, 0xc5,
    0x2a, 0x16, 0xb2, 0xf8, 0x26, 0x1d, 0x39, 0x09, 0xe1, 0x09, 0x0a, 0x22, 0x14,
    0xff, 0xc8, 0xe0, 0xc9, 0xdc, 0x81, 0xf8, 0xfa, 0xfd, 0xa7, 0xaf, 0x21, 0xf4,
    0x96, 0xb3, 0xbe, 0x91, 0x19, 0x0a, 0x0e, 0xe3, 0x42, 0xde, 0x10, 0xf1, 0xd2,
    0xf7, 0x17, 0x2c, 0x3f, 0xab, 0x0f, 0xe7, 0xf4, 0x23, 0x18, 0x0f, 0x09, 0x1d,
    0xee, 0x0d, 0x86, 0xf4, 0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x10, 0x00, 0x00,
    0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1b,
    0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
    0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61,
    0x74, 0x4d, 0x75, 0x6c, 0x00, 0x68, 0xf5, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xc3, 0x10, 0x6a, 0x3c, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf5,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xd7, 0xed, 0xff,
    0xff, 0xc6, 0xee, 0xff, 0xff, 0xdd, 0x08, 0x00, 0x00, 0xc1, 0xfd, 0xff, 0xff,
    0x67, 0xe6, 0xff, 0xff, 0x64, 0xd9, 0xff, 0xff, 0x4e, 0xeb, 0xff, 0xff, 0xb1,
    0xe7, 0xff, 0xff, 0x0b, 0x1e, 0x00, 0x00, 0x79, 0x03, 0x00, 0x00, 0x15, 0x12,
    0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0x03, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x9f, 0x0b, 0x00, 0x00, 0x7b, 0xff, 0xff, 0xff, 0x36, 0xf5, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x02, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74,
    0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33,
    0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
    0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65,
    0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00, 0x00, 0x30, 0xf6, 0xff,
    0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0xeb, 0x52, 0xc4, 0x37, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xce, 0xf5, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x80, 0x07,
    0x00, 0x00, 0x35, 0xf3, 0x26, 0xee, 0x0e, 0x04, 0x0f, 0x0a, 0x12, 0xf3, 0x01,
    0xfd, 0x0b, 0x32, 0x23, 0x04, 0x33, 0x10, 0x03, 0xf2, 0x0f, 0x14, 0x21, 0x0a,
    0x0d, 0xfb, 0x09, 0x13, 0x12, 0x1c, 0x15, 0xe1, 0xfc, 0xf6, 0x19, 0xf1, 0x04,
    0x14, 0x0f, 0xf6, 0x2a, 0xff, 0x12, 0xed, 0xf2, 0x03, 0x0b, 0xf0, 0x09, 0xf5,
    0x08, 0x09, 0x12, 0x26, 0x17, 0x0b, 0x10, 0x16, 0x13, 0x02, 0xfb, 0x1b, 0x21,
    0xf8, 0x2b, 0x07, 0x17, 0x07, 0xf2, 0x10, 0x25, 0xf4, 0x2f, 0x02, 0x05, 0xf0,
    0x0b, 0x24, 0x1b, 0xf2, 0x00, 0xf3, 0x14, 0xfd, 0x13, 0x21, 0x06, 0xdd, 0x2d,
    0x15, 0x26, 0xe4, 0xfb, 0x18, 0x24, 0xe0, 0x23, 0xf0, 0x10, 0xf1, 0xf3, 0x08,
    0x1d, 0xde, 0x0b, 0x01, 0x0a, 0x11, 0x07, 0x21, 0x10, 0xda, 0xfc, 0x1d, 0x00,
    0xf6, 0xfc, 0x1d, 0x1e, 0xdf, 0x11, 0x05, 0x19, 0x11, 0x0e, 0x1f, 0x11, 0x01,
    0x05, 0x06, 0x11, 0x08, 0x09, 0x20, 0x11, 0xf7, 0x10, 0x06, 0x0c, 0xfc, 0x13,
    0x16, 0x13, 0x05, 0x05, 0x04, 0x14, 0x05, 0x0f, 0x1b, 0x14, 0x01, 0x0b, 0x05,
    0x0c, 0xff, 0x0e, 0x19, 0x10, 0xfd, 0x08, 0x04, 0x0a, 0xfb, 0x08, 0x17, 0x12,
    0xfe, 0x08, 0x09, 0x0c, 0x0e, 0x0c, 0x1a, 0x10, 0xf1, 0x04, 0x0b, 0x0c, 0xfa,
    0x14, 0x12, 0x15, 0xf9, 0x0c, 0x02, 0x0f, 0x02, 0x0c, 0x1d, 0x13, 0xfe, 0x10,
    0x08, 0x0f, 0x0d, 0x0a, 0x18, 0x14, 0x01, 0x0c, 0x04, 0x11, 0x0f, 0x11, 0x18,
    0x14, 0xeb, 0x06, 0x0b, 0x13, 0x09, 0x0c, 0x1b, 0x14, 0xec, 0x00, 0x04, 0x0b,
    0x0e, 0x0a, 0x1b, 0x11, 0xf6, 0x03, 0x07, 0x0a, 0x13, 0x10, 0x1c, 0x10, 0xfd,
    0x06, 0x00, 0x09, 0x17, 0x0a, 0x1a, 0x14, 0xea, 0x01, 0x06, 0xfe, 0x01, 0x06,
    0xfb, 0xfc, 0x0a, 0x01, 0x06, 0xfd, 0x03, 0x05, 0xfc, 0xfb, 0x0b, 0x01, 0x06,
    0xfd, 0x03, 0x04, 0xfb, 0xfc, 0x0a, 0x01, 0x05, 0xfd, 0x04, 0x05, 0xfc, 0xfc,
    0x0a, 0x02, 0x06, 0xfe, 0x03, 0x04, 0xfb, 0xff, 0x0b, 0x02, 0x05, 0x00, 0x03,
    0x04, 0xfa, 0xfc, 0x0b, 0x01, 0x04, 0x00, 0x05, 0x07, 0xfc, 0xfb, 0x0b, 0xff,
    0x05, 0xff, 0x05, 0x03, 0xfd, 0xfa, 0x0a, 0xff, 0x05, 0xff, 0x05, 0x05, 0xfd,
    0xfa, 0x0a, 0x00, 0x05, 0xfe, 0x05, 0x04, 0xff, 0xfa, 0x09, 0x00, 0x06, 0xfd,
    0x04, 0x05, 0xfe, 0xfb, 0x0a, 0x02, 0x07, 0xfe, 0x03, 0x04, 0xfc, 0xfc, 0x0a,
    0x04, 0x06, 0x00, 0x02, 0x06, 0xfc, 0xfe, 0x0c, 0x04, 0x07, 0x01, 0x03, 0x06,
    0xfe, 0xfc, 0x0c, 0x05, 0x05, 0x03, 0x03, 0x08, 0xfc, 0xfc, 0x0c, 0xf8, 0xfc,
    0x02, 0x04, 0x00, 0x08, 0x09, 0xfd, 0xf8, 0xfd, 0x03, 0x03, 0x00, 0x09, 0x09,
    0xfd, 0xf7, 0xfc, 0x04, 0x03, 0x00, 0x0b, 0x09, 0xfd, 0xf7, 0xfd, 0x04, 0x03,
    0xff, 0x0b, 0x08, 0xfe, 0xf6, 0xfb, 0x03, 0x04, 0x00, 0x0e, 0x06, 0xfd, 0xf5,
    0xfc, 0x02, 0x03, 0xff, 0x0f, 0x07, 0xfd, 0xf5, 0xfb, 0x03, 0x02, 0xff, 0x0b,
    0x0b, 0xfe, 0xf9, 0xfc, 0x03, 0x02, 0xfe, 0x09, 0x0b, 0xfd, 0xf9, 0xfc, 0x03,
    0x02, 0xfe, 0x07, 0x0d, 0xfd, 0xfa, 0xfd, 0x04, 0x00, 0xff, 0x04, 0x0d, 0xfe,
    0xfa, 0xfa, 0x03, 0x02, 0x00, 0x06, 0x0a, 0xfd, 0xf9, 0xfd, 0x01, 0x03, 0xff,
    0x0b, 0x08, 0xfe, 0xf6, 0xfb, 0x01, 0x03, 0xfe, 0x09, 0x07, 0xfd, 0xf5, 0xfa,
    0x02, 0x03, 0xfe, 0x09, 0x08, 0xfe, 0xf5, 0xfb, 0xff, 0x03, 0xfc, 0x09, 0x07,
    0xfd, 0xe9, 0xf0, 0x0b, 0xff, 0x29, 0x51, 0x2a, 0xf1, 0xee, 0xf4, 0x1f, 0x04,
    0x16, 0x3c, 0x2a, 0x02, 0xe9, 0xff, 0x0d, 0x28, 0x29, 0x48, 0x3e, 0xf7, 0xdf,
    0xfe, 0x1e, 0xf3, 0x21, 0x45, 0x3b, 0xd6, 0xe8, 0xf0, 0x19, 0xf6, 0x1b, 0x3e,
    0x2a, 0x0e, 0xe0, 0xf9, 0x0d, 0x22, 0x1a, 0x43, 0x34, 0xed, 0xe8, 0xf4, 0x10,
    0x19, 0x13, 0x45, 0x3d, 0xfa, 0xf5, 0xf6, 0x15, 0x03, 0x14, 0x54, 0x38, 0xf9,
    0xf5, 0xfb, 0x18, 0xe9, 0x1d, 0x52, 0x2d, 0xde, 0xf7, 0xf8, 0x1f, 0xe8, 0x10,
    0x3e, 0x2e, 0xf0, 0xf7, 0xfe, 0x1f, 0x1b, 0x30, 0x3e, 0x2d, 0x00, 0xe9, 0xf3,
    0x0a, 0xe7, 0x11, 0x4f, 0x32, 0x11, 0xde, 0xf3, 0x19, 0x1a, 0x24, 0x45, 0x32,
    0x03, 0xdc, 0xf7, 0x08, 0x30, 0x25, 0x35, 0x2b, 0x0e, 0xe2, 0xf1, 0x0b, 0x09,
    0x12, 0x45, 0x2e, 0xee, 0x3c, 0x37, 0x37, 0xfc, 0x33, 0x2c, 0x05, 0xf3, 0x41,
    0x37, 0x1a, 0xef, 0x13, 0x0d, 0x12, 0x08, 0x21, 0x3b, 0x2a, 0x0c, 0x12, 0x09,
    0x26, 0x0f, 0x37, 0x33, 0x11, 0xeb, 0x2a, 0x0f, 0x0b, 0xe1, 0x28, 0x1b, 0x1f,
    0xdd, 0x1d, 0x1b, 0x07, 0xe8, 0x3b, 0x1f, 0x12, 0xd7, 0x2f, 0x08, 0x0d, 0xfb,
    0x27, 0x2f, 0x1d, 0xcb, 0x2a, 0x13, 0x04, 0x1a, 0x37, 0x2b, 0x13, 0x0b, 0x15,
    0x1d, 0x16, 0xf2, 0x1e, 0x18, 0x1b, 0xcd, 0x27, 0x09, 0x05, 0xee, 0x29, 0x2b,
    0x24, 0xe9, 0x0e, 0x1d, 0x16, 0xe8, 0x28, 0x24, 0x30, 0xdb, 0x25, 0x0d, 0x1c,
    0xf5, 0x2d, 0x22, 0x20, 0xd4, 0x1a, 0x18, 0x11, 0x08, 0x37, 0x35, 0x22, 0xda,
    0x0f, 0x0f, 0x22, 0xed, 0x1e, 0x15, 0x12, 0xd1, 0x18, 0x22, 0x29, 0xfa, 0x3c,
    0x1f, 0x2b, 0xf5, 0x26, 0x17, 0x0f, 0xe1, 0x05, 0x0c, 0x12, 0x12, 0x19, 0x19,
    0x10, 0xf3, 0x06, 0x0c, 0x11, 0xf9, 0x19, 0x18, 0x10, 0xfb, 0x04, 0x0d, 0x12,
    0xff, 0x19, 0x19, 0x11, 0x01, 0x04, 0x0c, 0x12, 0x00, 0x12, 0x1b, 0x0f, 0x0c,
    0x04, 0x0b, 0x0e, 0x11, 0x15, 0x1a, 0x0e, 0x06, 0x04, 0x0b, 0x0d, 0xff, 0x11,
    0x1a, 0x0f, 0x05, 0x04, 0x0c, 0x0d, 0xf2, 0x12, 0x1a, 0x10, 0xf2, 0x05, 0x0c,
    0x0f, 0xfa, 0x16, 0x19, 0x10, 0xf6, 0x05, 0x0d, 0x11, 0x0c, 0x17, 0x19, 0x11,
    0x03, 0x05, 0x0d, 0x10, 0x05, 0x15, 0x18, 0x0f, 0xf5, 0x05, 0x0c, 0x11, 0x05,
    0x15, 0x17, 0x11, 0x01, 0x05, 0x0d, 0x11, 0x14, 0x15, 0x1b, 0x0f, 0x0c, 0x05,
    0x0c, 0x0e, 0x05, 0x13, 0x1b, 0x0f, 0xf1, 0x03, 0x0c, 0x0d, 0x0a, 0x12, 0x1a,
    0x0f, 0xf7, 0x03, 0x0b, 0x0d, 0x05, 0x10, 0x1b, 0x0f, 0xf4, 0x1b, 0x2b, 0x25,
    0xf0, 0x35, 0x14, 0x0d, 0x15, 0x16, 0x37, 0x11, 0xfb, 0x34, 0x28, 0x17, 0x20,
    0x1e, 0x24, 0x10, 0xe1, 0x34, 0x12, 0x0b, 0x30, 0x1e, 0x20, 0x12, 0xe2, 0x29,
    0x1b, 0x08, 0x25, 0x1a, 0x2f, 0x16, 0xf5, 0x32, 0x11, 0x13, 0xfe, 0x18, 0x2c,
    0x14, 0xe9, 0x33, 0x15, 0x1c, 0x00, 0x1e, 0x22, 0x18, 0xe1, 0x39, 0x21, 0x04,
    0x18, 0x13, 0x21, 0x18, 0xd9, 0x3c, 0x19, 0x0a, 0x36, 0x15, 0x21, 0x23, 0xe5,
    0x3f, 0x24, 0x0b, 0x03, 0x10, 0x2a, 0x1a, 0xd7, 0x42, 0x35, 0x0b, 0x15, 0x09,
    0x3b, 0x1f, 0xe9, 0x41, 0x30, 0x17, 0x17, 0x19, 0x29, 0x27, 0xd2, 0x2c, 0x28,
    0x0a, 0x19, 0x16, 0x32, 0x1d, 0xeb, 0x3e, 0x18, 0x13, 0x26, 0x16, 0x24, 0x22,
    0xd1, 0x44, 0x2b, 0x1c, 0x1a, 0x18, 0x35, 0x24, 0xe1, 0x38, 0x29, 0x09, 0x1e,
    0xe5, 0xfc, 0xfe, 0x1a, 0x0c, 0xe7, 0xe6, 0x2e, 0xe0, 0x00, 0xf2, 0x11, 0xff,
    0xd9, 0xf7, 0x0e, 0xff, 0x05, 0xe6, 0x22, 0x0c, 0xe7, 0xf7, 0x28, 0xf5, 0x02,
    0xfe, 0x0d, 0x00, 0xf8, 0xfb, 0x33, 0xe4, 0x00, 0xf8, 0x15, 0x02, 0xfa, 0xf1,
    0x1d, 0x02, 0xfa, 0x00, 0x06, 0x06, 0xd6, 0xe8, 0x22, 0x05, 0x06, 0xfa, 0x1f,
    0x0b, 0xfa, 0xf0, 0x2e, 0xe6, 0x0d, 0xf7, 0x24, 0x06, 0xe8, 0xf8, 0x16, 0x05,
    0xfa, 0xf9, 0x0e, 0xf7, 0xe0, 0xf1, 0x21, 0xfd, 0x06, 0xf7, 0x1e, 0xfd, 0x00,
    0xfa, 0x28, 0xe6, 0x02, 0xeb, 0x01, 0xf3, 0xfb, 0xea, 0x26, 0x08, 0x0d, 0xfc,
    0x03, 0x01, 0xf5, 0xfc, 0x2f, 0xff, 0x0a, 0xfe, 0x17, 0x08, 0xee, 0xe9, 0x10,
    0xfe, 0x06, 0xfc, 0x0d, 0x05, 0xe7, 0xf2, 0x2f, 0xf7, 0x11, 0xfd, 0x1a, 0x07,
    0xf1, 0xf5, 0x2b, 0xef, 0xf4, 0xfd, 0x0f, 0xf8, 0x04, 0x0a, 0x01, 0xee, 0xf6,
    0x00, 0x0f, 0xf9, 0x09, 0x08, 0x02, 0xee, 0xf4, 0x01, 0x11, 0xfb, 0x0b, 0x07,
    0x03, 0xee, 0xf7, 0x02, 0x10, 0xf9, 0x0e, 0x07, 0x05, 0xea, 0xf4, 0x02, 0x14,
    0xfa, 0x15, 0x02, 0x03, 0xea, 0xf7, 0xfe, 0x12, 0xfa, 0x15, 0x05, 0x04, 0xe9,
    0xf4, 0x01, 0x0d, 0xf7, 0x09, 0x0d, 0x04, 0xf3, 0xf3, 0x00, 0x0d, 0xf6, 0x07,
    0x0d, 0x02, 0xf2, 0xf5, 0xfc, 0x0d, 0xf5, 0x06, 0x0f, 0x03, 0xf4, 0xf7, 0xff,
    0x08, 0xf6, 0xfe, 0x12, 0x03, 0xf3, 0xef, 0xfe, 0x0c, 0xf8, 0x01, 0x0a, 0x02,
    0xef, 0xf5, 0xfb, 0x0f, 0xf7, 0x0a, 0x08, 0x05, 0xea, 0xf1, 0xfa, 0x10, 0xf5,
    0x07, 0x04, 0x04, 0xe8, 0xf0, 0xfb, 0x10, 0xf5, 0x08, 0x05, 0x04, 0xe6, 0xf3,
    0xf6, 0x10, 0xf0, 0x08, 0x05, 0x02, 0xec, 0x22, 0xe0, 0xf3, 0x2a, 0x08, 0xf0,
    0x11, 0xec, 0x1f, 0xf9, 0x03, 0x18, 0x0e, 0x06, 0x00, 0xe8, 0x24, 0x0e, 0xe6,
    0x05, 0x0c, 0x0b, 0x35, 0xd2, 0x04, 0xee, 0x1e, 0x1f, 0xf4, 0x05, 0x22, 0xe0,
    0xf2, 0x03, 0xf3, 0x0d, 0xeb, 0xef, 0x2a, 0x0c, 0xf6, 0xf8, 0x18, 0x1e, 0x0d,
    0x08, 0x24, 0xea, 0x12, 0x07, 0xfc, 0x04, 0xf4, 0xfa, 0x29, 0x08, 0x07, 0xf8,
    0x14, 0x11, 0xfa, 0xe2, 0x01, 0x02, 0x20, 0x0b, 0x13, 0x00, 0x0b, 0xfe, 0x0d,
    0xe7, 0x22, 0x0c, 0x13, 0xfe, 0xeb, 0xf8, 0x2d, 0xe4, 0xf4, 0xf0, 0x12, 0x19,
    0xf1, 0xe2, 0x24, 0xec, 0xfa, 0xf3, 0xf0, 0x22, 0xe5, 0xf2, 0x29, 0xeb, 0x02,
    0xf9, 0x00, 0x15, 0x10, 0xf4, 0x2a, 0xdc, 0x19, 0xf5, 0x0a, 0x10, 0xe9, 0xeb,
    0x10, 0xf6, 0x04, 0xf5, 0xfc, 0x1e, 0x05, 0xfa, 0x1c, 0xff, 0x07, 0x03, 0xfc,
    0x0e, 0x03, 0x00, 0x03, 0xff, 0x09, 0x03, 0xfd, 0x0c, 0x04, 0x00, 0x03, 0xfd,
    0x09, 0x02, 0xfd, 0x0a, 0x04, 0x02, 0x02, 0xff, 0x07, 0x03, 0xfe, 0x0b, 0x06,
    0xff, 0x02, 0x00, 0x07, 0x04, 0xfd, 0x0b, 0x03, 0x05, 0x03, 0x00, 0x07, 0x05,
    0xfc, 0x09, 0x01, 0x00, 0x03, 0x00, 0x06, 0x05, 0xfe, 0x0d, 0x06, 0x00, 0x04,
    0xfe, 0x08, 0x04, 0xff, 0x08, 0x05, 0xff, 0x02, 0xff, 0x08, 0x04, 0xfe, 0x0c,
    0x04, 0xff, 0x03, 0xff, 0x08, 0x03, 0xfe, 0x0a, 0x06, 0xff, 0x02, 0xff, 0x09,
    0x03, 0xfd, 0x0c, 0x05, 0x01, 0x02, 0x00, 0x0c, 0x03, 0xfe, 0x0a, 0x05, 0x01,
    0x02, 0x02, 0x0a, 0x05, 0xfc, 0x0c, 0x04, 0x02, 0x04, 0x02, 0x0a, 0x07, 0xfd,
    0x0b, 0x05, 0x01, 0x04, 0x02, 0x07, 0x07, 0xfd, 0x0d, 0x03, 0x01, 0x05, 0xd5,
    0xbd, 0xcd, 0x6b, 0xb1, 0xe8, 0xe9, 0x49, 0xd2, 0xd4, 0xe2, 0x5d, 0xc4, 0xf3,
    0xe7, 0x3e, 0xd0, 0xc5, 0xe7, 0x60, 0xb9, 0xde, 0xf2, 0x5b, 0xdc, 0xbb, 0xe7,
    0x67, 0xcf, 0xe0, 0xfc, 0x5c, 0xd6, 0xc5, 0xdc, 0x6c, 0xd7, 0xef, 0xfa, 0x39,
    0xcb, 0xc4, 0xe5, 0x63, 0xc8, 0xee, 0xe2, 0x41, 0xce, 0xcc, 0xe2, 0x3e, 0xb9,
    0xe9, 0xfb, 0x38, 0xe5, 0xce, 0xdb, 0x7f, 0xc5, 0xef, 0xf0, 0x49, 0xe6, 0xc8,
    0xd2, 0x44, 0xbf, 0xde, 0x01, 0x48, 0xea, 0xd0, 0xd3, 0x7a, 0xce, 0xe4, 0x07,
    0x35, 0xeb, 0xcc, 0xe6, 0x3c, 0xc8, 0xda, 0xff, 0x3f, 0xd8, 0xc2, 0xd6, 0x52,
    0xb5, 0xdf, 0xed, 0x46, 0xcc, 0xc9, 0xdc, 0x65, 0xc2, 0xe8, 0xec, 0x16, 0xc6,
    0xb8, 0xcd, 0x48, 0xb5, 0xee, 0xe2, 0x1f, 0xcd, 0xc4, 0xd7, 0x6d, 0xc5, 0xd8,
    0xef, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xfd, 0x18, 0xf9, 0xef, 0x0d, 0xf7, 0xf3, 0x19,
    0xff, 0x06, 0xfd, 0xf6, 0x11, 0xf8, 0xf2, 0x25, 0x0b, 0x07, 0xfa, 0xf3, 0x0a,
    0xf1, 0xf3, 0x0e, 0x06, 0x07, 0xff, 0xf7, 0x10, 0xef, 0xf3, 0x19, 0x10, 0x0e,
    0x02, 0xf4, 0x0b, 0xee, 0xfa, 0x1f, 0x11, 0x05, 0x01, 0xfa, 0x09, 0xea, 0xf0,
    0x09, 0x0b, 0x13, 0x01, 0xfa, 0x11, 0xf2, 0xf1, 0x14, 0x06, 0x17, 0x00, 0xfc,
    0x0c, 0xfa, 0xf0, 0x1e, 0xfc, 0x05, 0x00, 0xf6, 0x13, 0xfa, 0xed, 0x15, 0x05,
    0x0b, 0x01, 0xfc, 0x10, 0xfe, 0xec, 0x1f, 0x02, 0x12, 0xfc, 0xfb, 0x0f, 0x01,
    0xf1, 0x08, 0x09, 0x16, 0x04, 0xf4, 0x09, 0xf7, 0xf6, 0x05, 0x07, 0x11, 0x04,
    0xee, 0x0d, 0xfa, 0xf7, 0x21, 0x16, 0x0c, 0x04, 0xfd, 0x15, 0xf5, 0xf7, 0x04,
    0x13, 0x0c, 0x0a, 0xef, 0x15, 0xf0, 0xf5, 0x15, 0x02, 0x09, 0x04, 0xfb, 0x0d,
    0x02, 0x01, 0x03, 0x02, 0x09, 0x04, 0xfc, 0x0c, 0x02, 0x01, 0x03, 0x02, 0x09,
    0x03, 0xfc, 0x0a, 0x03, 0x02, 0x03, 0x03, 0x08, 0x04, 0xfc, 0x0b, 0x04, 0x00,
    0x02, 0x03, 0x09, 0x04, 0xfb, 0x0a, 0x02, 0x04, 0x03, 0x03, 0x08, 0x05, 0xfb,
    0x09, 0x00, 0x01, 0x03, 0x03, 0x08, 0x04, 0xfd, 0x0c, 0x03, 0xff, 0x03, 0x01,
    0x0a, 0x04, 0xfe, 0x0a, 0x04, 0xff, 0x03, 0x02, 0x09, 0x05, 0xfe, 0x0c, 0x04,
    0xff, 0x03, 0x02, 0x09, 0x03, 0xff, 0x0b, 0x06, 0xfe, 0x02, 0x02, 0x0b, 0x04,
    0xfd, 0x0b, 0x04, 0x00, 0x03, 0x03, 0x0b, 0x04, 0xfd, 0x0a, 0x03, 0x01, 0x03,
    0x05, 0x0b, 0x06, 0xfc, 0x0d, 0x04, 0x03, 0x04, 0x05, 0x0b, 0x07, 0xfc, 0x0b,
    0x04, 0x01, 0x04, 0x06, 0x09, 0x08, 0xfd, 0x0d, 0x03, 0x00, 0x04, 0x3e, 0xfd,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
    0x00, 0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
    0x00, 0x20, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0xda, 0x45, 0x6f, 0x3b, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0xfd,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x2e, 0xe6, 0xff,
    0xff, 0x29, 0xf9, 0xff, 0xff, 0x54, 0xfa, 0xff, 0xff, 0x34, 0x86, 0x00, 0x00,
    0x27, 0xfc, 0xff, 0xff, 0xec, 0xfb, 0xff, 0xff, 0xb7, 0xfa, 0xff, 0xff, 0x38,
    0x8b, 0x00, 0x00, 0xd2, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
    0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63,
    0x65, 0x00, 0x00, 0x00, 0xcc, 0xfe, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x28,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x78, 0xea, 0xf7, 0x37, 0x88, 0x29,
    0x26, 0x38, 0xdf, 0x00, 0x21, 0x38, 0xa7, 0xac, 0xa6, 0x37, 0x10, 0x55, 0x43,
    0x38, 0xc6, 0x4d, 0x45, 0x38, 0x4b, 0x5a, 0x1a, 0x38, 0xa4, 0x48, 0xb2, 0x37,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0xfe, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x9a, 0x81, 0x2d, 0x8c, 0x04, 0x3f, 0xa0,
    0x7c, 0x8a, 0x06, 0xdd, 0x85, 0xf7, 0x67, 0xd6, 0xc1, 0x14, 0x81, 0xef, 0xb6,
    0xa3, 0x24, 0x1c, 0x6d, 0x0e, 0x5c, 0x45, 0xbf, 0x9f, 0x39, 0x28, 0xc3, 0x74,
    0xea, 0x0f, 0x7f, 0xc9, 0x65, 0x0e, 0x69, 0x7f, 0x6f, 0x8e, 0x61, 0x11, 0x41,
    0x78, 0x69, 0xc4, 0x15, 0xeb, 0x14, 0x8d, 0x12, 0x50, 0xd6, 0x7f, 0xe3, 0x7b,
    0xe7, 0x08, 0x70, 0xc5, 0x27, 0x62, 0x7c, 0xf2, 0x3b, 0xa2, 0xb6, 0xe5, 0x7f,
    0x9a, 0x00, 0xdb, 0x2e, 0x9c, 0xfd, 0x43, 0xad, 0xbc, 0x2b, 0x98, 0x81, 0xc4,
    0xac, 0x98, 0xf4, 0x2c, 0x7f, 0x3c, 0x5c, 0x1b, 0xec, 0xc1, 0xaf, 0x12, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x1c, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
    0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64,
    0x5f, 0x32, 0x2f, 0x43, 0x6f, 0x6e, 0x76, 0x32, 0x44, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x8c, 0x9f, 0x82, 0x3b, 0xcc, 0x18, 0xaf, 0x3b, 0x1f, 0xa9, 0xa9,
    0x3b, 0xf8, 0xa2, 0x2f, 0x3b, 0xdc, 0xd5, 0xcd, 0x3b, 0xb5, 0xe9, 0xcf, 0x3b,
    0xff, 0xa6, 0xa2, 0x3b, 0xc3, 0xde, 0x3b, 0x3b, 0x08, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x78, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x08, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x10,
    0x00, 0x14, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x10, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f, 0x31, 0x2f, 0x43, 0x6f, 0x6e,
    0x73, 0x74, 0x00, 0x00, 0x00, 0x00, 0x90, 0xff, 0xff, 0xff, 0x14, 0x00, 0x18,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x18, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x61, 0x63, 0x63, 0x65, 0x6c, 0x65,
    0x72, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff,
    0xff, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
};
const int tensorflow_model_lcnn_quant_len = 5560;
