
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.

#include "sine_model.h"

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

const unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
    0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c,
    0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00,
    0x00, 0xec, 0x00, 0x00, 0x00, 0x08, 0x07, 0x00, 0x00, 0x18, 0x07, 0x00, 0x00,
    0x28, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
    0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
    0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x94, 0xff, 0xff, 0xff, 0x09, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x35, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x86, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0xdc, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f,
    0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00,
    0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f,
    0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69,
    0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x18, 0x06, 0x00, 0x00, 0x10, 0x06,
    0x00, 0x00, 0xfc, 0x05, 0x00, 0x00, 0xa4, 0x05, 0x00, 0x00, 0x54, 0x05, 0x00,
    0x00, 0x04, 0x05, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00,
    0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x6c,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0xfa, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e,
    0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xea, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04,
    0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x35, 0x2e,
    0x30, 0x00, 0x00, 0x9a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0xf5, 0xff, 0xff, 0xac, 0xf5, 0xff, 0xff,
    0xb0, 0xf5, 0xff, 0xff, 0xc2, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0x44, 0xc8, 0x3a, 0x3f, 0x0f, 0x03, 0xe5, 0xbe, 0xc1, 0x03,
    0x2c, 0xbf, 0x85, 0x13, 0x04, 0xbf, 0xd0, 0x14, 0x1d, 0x3f, 0x82, 0x2e, 0x51,
    0xbf, 0x6d, 0x46, 0x82, 0x3f, 0xe4, 0x7c, 0xeb, 0xbc, 0xcf, 0x0a, 0xa5, 0x3f,
    0x55, 0x77, 0x0c, 0xbf, 0x1b, 0x20, 0x8d, 0x3f, 0x64, 0x6b, 0xec, 0x3b, 0xa1,
    0x7b, 0x9f, 0x3f, 0xeb, 0xa8, 0xd6, 0x3e, 0xf0, 0x89, 0x53, 0xbf, 0x25, 0xfc,
    0x7b, 0xbf, 0x0e, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x00, 0xc2, 0xff, 0x5d, 0x3e, 0xfb, 0x2a, 0x95, 0x3e, 0x4b, 0xb7, 0xe0, 0xbf,
    0x20, 0x5f, 0xa6, 0xbc, 0xe4, 0xb1, 0xb1, 0x3d, 0x16, 0x04, 0xba, 0xbe, 0xcc,
    0xf1, 0xd1, 0x3d, 0x62, 0x65, 0xc6, 0xbe, 0x1d, 0x1e, 0x80, 0x3e, 0xd7, 0x3c,
    0x67, 0xbe, 0xdf, 0x36, 0x1c, 0xbd, 0x16, 0x8c, 0x66, 0x3e, 0xda, 0x4a, 0xa5,
    0x3e, 0x09, 0x02, 0xa1, 0x3e, 0x72, 0x97, 0x2c, 0x3e, 0x80, 0xac, 0x19, 0x3e,
    0x92, 0x46, 0x7c, 0x3e, 0x09, 0xb8, 0x88, 0xbd, 0x8b, 0x32, 0x96, 0xbe, 0x9a,
    0xa0, 0x6c, 0x3e, 0x0c, 0x2c, 0xef, 0xbd, 0xec, 0xd9, 0xdf, 0xbd, 0x98, 0x1d,
    0xe3, 0xbd, 0xc0, 0x89, 0x5e, 0xbe, 0xb9, 0xf3, 0xb1, 0x3e, 0xd4, 0x65, 0x11,
    0xbe, 0x7e, 0xd6, 0x21, 0xbe, 0x62, 0xeb, 0x60, 0x3e, 0xbb, 0x32, 0xbc, 0xbe,
    0xc7, 0x4e, 0x44, 0xbe, 0x22, 0x97, 0x04, 0x3e, 0xe1, 0x2b, 0xae, 0x3e, 0x3e,
    0x6d, 0x62, 0x3e, 0x2b, 0x46, 0x25, 0xbf, 0x83, 0x4e, 0x1c, 0x3f, 0x14, 0x80,
    0xdc, 0x3d, 0x85, 0x35, 0x96, 0x3e, 0xd3, 0xb8, 0xa8, 0x3e, 0xd8, 0x07, 0x13,
    0xbd, 0x7d, 0x85, 0xdc, 0xbe, 0xc8, 0xfd, 0x2f, 0xbe, 0xac, 0xed, 0xbe, 0x3d,
    0x60, 0xb6, 0x1c, 0xbf, 0xdc, 0x72, 0xa6, 0xbe, 0xb0, 0x27, 0xad, 0xbe, 0xdc,
    0x06, 0x69, 0xbe, 0xd4, 0x2a, 0xff, 0x3e, 0x5e, 0x1c, 0x27, 0xbf, 0x10, 0x52,
    0x5c, 0xbd, 0x6f, 0xb0, 0xb4, 0x3e, 0x65, 0x3f, 0x68, 0x3f, 0xb6, 0xbd, 0xc4,
    0xbe, 0xea, 0x10, 0x29, 0x3e, 0x94, 0xf6, 0xa4, 0xbe, 0x75, 0xbc, 0x92, 0x3e,
    0x60, 0xaf, 0xc1, 0xbe, 0xe7, 0x78, 0x8e, 0x3e, 0xe5, 0xa7, 0xdd, 0x3e, 0x35,
    0x9a, 0x84, 0x3e, 0x5b, 0x3e, 0x9e, 0x3e, 0xf5, 0x45, 0x29, 0x3e, 0x1a, 0x84,
    0x02, 0x3e, 0x85, 0x86, 0xa2, 0xbe, 0x7e, 0x1a, 0x1b, 0xbe, 0xba, 0xea, 0x35,
    0x3e, 0x29, 0x30, 0x32, 0xbf, 0xf1, 0x71, 0x42, 0x3e, 0x3f, 0x0a, 0xa4, 0x3e,
    0x0e, 0x30, 0x87, 0xbe, 0x58, 0x5b, 0x38, 0x3d, 0x58, 0xe7, 0x39, 0xbe, 0x6c,
    0xb3, 0xad, 0xbd, 0xcb, 0x1f, 0xaa, 0x3e, 0x55, 0x13, 0xc4, 0x3e, 0x50, 0x7d,
    0xc7, 0x3c, 0xef, 0x29, 0xca, 0xbe, 0x87, 0x6e, 0x9b, 0x3e, 0x96, 0xd6, 0x6e,
    0x3e, 0xcf, 0x4f, 0x06, 0xbf, 0x99, 0xd8, 0x1d, 0xbf, 0x80, 0x98, 0xcf, 0xbb,
    0x7b, 0xf3, 0xd1, 0xbd, 0x41, 0x98, 0x57, 0x3f, 0xcd, 0xe6, 0xc0, 0x3e, 0x5f,
    0x7a, 0xc9, 0x3e, 0x50, 0xed, 0x10, 0xbe, 0x31, 0x2f, 0xa9, 0x3e, 0x92, 0x77,
    0x23, 0x3e, 0x80, 0xea, 0x01, 0x3d, 0xe0, 0x91, 0x39, 0xbc, 0x08, 0x10, 0x3f,
    0x3d, 0xcd, 0x01, 0xcb, 0x3e, 0x8d, 0x65, 0x10, 0xbd, 0xb4, 0x07, 0xcd, 0x3d,
    0xbe, 0xab, 0x99, 0xbe, 0x80, 0xa4, 0xa0, 0x3e, 0xe0, 0xc8, 0x0e, 0xbd, 0x39,
    0xa0, 0x45, 0xbc, 0x57, 0xce, 0x44, 0xbf, 0x67, 0xdd, 0x61, 0xbe, 0x04, 0xa5,
    0xef, 0xbd, 0x07, 0x62, 0x90, 0x3e, 0x15, 0x6d, 0xb8, 0x3e, 0x2a, 0x63, 0x0e,
    0x3e, 0xd2, 0x71, 0x65, 0x3e, 0x2e, 0xc3, 0xad, 0xbe, 0xa2, 0x42, 0x7d, 0x3e,
    0x2d, 0xe8, 0x3d, 0xbe, 0x7c, 0x0d, 0x47, 0xbd, 0x0d, 0xbf, 0xbd, 0x3e, 0xec,
    0x90, 0x85, 0x3e, 0xf6, 0xbe, 0x71, 0x3e, 0x7f, 0x7f, 0xad, 0x3e, 0x6f, 0x0e,
    0xa5, 0x3e, 0x3b, 0x57, 0xd2, 0x3e, 0x40, 0xc1, 0x9f, 0x3b, 0xae, 0x77, 0x92,
    0xbe, 0x80, 0x6b, 0x1f, 0x3c, 0x7c, 0x0c, 0x81, 0x3d, 0xec, 0x6f, 0x8f, 0xbe,
    0x1f, 0x78, 0xae, 0x3e, 0x31, 0xba, 0x8d, 0x3e, 0x55, 0xf1, 0x3f, 0x3e, 0xe0,
    0xe9, 0x46, 0x3c, 0xbe, 0x0c, 0x66, 0x3e, 0xd6, 0x23, 0xdd, 0xbe, 0x73, 0xf8,
    0x04, 0x3e, 0xce, 0x95, 0xb9, 0xbe, 0x08, 0x27, 0xc6, 0xbe, 0xd9, 0x3a, 0xac,
    0xbd, 0x0e, 0x01, 0x56, 0x3f, 0x57, 0xd6, 0xcf, 0xbe, 0x16, 0x94, 0x13, 0x3e,
    0xc0, 0x61, 0x95, 0xbc, 0xc0, 0x32, 0x0a, 0x3d, 0xc1, 0xfc, 0xb2, 0xbe, 0xf4,
    0xb1, 0xd7, 0x3d, 0x77, 0x91, 0xd4, 0xbe, 0x96, 0x58, 0x0b, 0xbf, 0x07, 0xc2,
    0x98, 0x3e, 0xf7, 0xad, 0xe8, 0xbe, 0xa0, 0x94, 0x01, 0xbc, 0x95, 0xee, 0x68,
    0x3e, 0x60, 0x3d, 0xe1, 0x3d, 0x78, 0x4a, 0x10, 0xbe, 0x01, 0x30, 0x21, 0xbf,
    0x3e, 0x2f, 0x3c, 0x3f, 0x29, 0x68, 0xc3, 0x3e, 0x66, 0xc7, 0x5a, 0x3e, 0x7c,
    0xa1, 0xaf, 0x3d, 0x88, 0x3c, 0x5c, 0xbd, 0xe1, 0xcf, 0xb1, 0xbe, 0xb2, 0xb8,
    0x38, 0xbe, 0x5c, 0x1e, 0x8d, 0xbe, 0x87, 0xb3, 0xa0, 0xbe, 0xa2, 0xce, 0x8d,
    0xbe, 0x49, 0xa3, 0x1a, 0xbe, 0xe8, 0x00, 0x01, 0x3d, 0x17, 0x36, 0xf8, 0xbb,
    0x1c, 0xea, 0x32, 0xbe, 0xfe, 0x14, 0x04, 0x3e, 0xe9, 0x47, 0xdd, 0xbd, 0xd2,
    0x8d, 0x02, 0x3e, 0x18, 0xff, 0x75, 0xbd, 0xa4, 0x83, 0x9c, 0xbd, 0xe1, 0xc4,
    0x41, 0xbe, 0x96, 0x1b, 0x83, 0xbe, 0xb0, 0x06, 0x09, 0xbd, 0xf8, 0x17, 0x14,
    0xbe, 0x4e, 0xeb, 0x13, 0x3e, 0xe9, 0xb7, 0x15, 0xbf, 0x18, 0x4a, 0x1a, 0xbe,
    0xad, 0xc5, 0xed, 0xbe, 0x05, 0x00, 0xae, 0x3e, 0xca, 0xb0, 0x5f, 0x3e, 0xa6,
    0x99, 0x9d, 0x3e, 0xba, 0x0d, 0x83, 0xbe, 0x42, 0xce, 0xb2, 0xbd, 0xe0, 0xdc,
    0xdc, 0xbc, 0xeb, 0xc3, 0xc1, 0xbe, 0x3a, 0x1f, 0x13, 0x3e, 0xa2, 0xec, 0x75,
    0x3e, 0x9b, 0x1a, 0x50, 0xbe, 0xd9, 0x45, 0x78, 0xbe, 0xf3, 0x2e, 0x95, 0x3e,
    0xab, 0x18, 0xb0, 0x3e, 0x1b, 0xb7, 0xc0, 0x3e, 0x8a, 0x04, 0x52, 0x3e, 0x14,
    0xed, 0x57, 0x3e, 0x6b, 0x19, 0x88, 0x3e, 0x2d, 0x93, 0x7f, 0xbe, 0xc4, 0x2b,
    0xfc, 0x3d, 0x48, 0xdc, 0x9b, 0xbe, 0x81, 0x66, 0x7d, 0xbe, 0x0b, 0x87, 0x46,
    0x3f, 0xaa, 0xaa, 0xcd, 0xbe, 0x18, 0x18, 0x83, 0xbe, 0xa4, 0xef, 0xf0, 0x3d,
    0x95, 0x82, 0x9b, 0x3e, 0xbb, 0x7b, 0xbc, 0x3e, 0x86, 0xd6, 0x9d, 0xbe, 0xc6,
    0xec, 0x2a, 0x3e, 0x18, 0x2b, 0x25, 0x3e, 0xc5, 0xa2, 0xad, 0x3e, 0xe7, 0x32,
    0x2a, 0xbf, 0xd5, 0x99, 0x94, 0x3e, 0x85, 0x04, 0x37, 0x3e, 0x85, 0xfa, 0x87,
    0xbe, 0x92, 0x64, 0xda, 0xbe, 0x97, 0x53, 0xdc, 0xbe, 0xf7, 0x4e, 0x34, 0x3e,
    0xd0, 0xb5, 0x82, 0xbe, 0x07, 0x3e, 0xb0, 0xbe, 0x6b, 0xf5, 0xb4, 0xbe, 0x3f,
    0x12, 0xaa, 0x3e, 0xa0, 0xb7, 0x7f, 0x3d, 0xcd, 0x2d, 0xd4, 0x3e, 0x9a, 0x03,
    0xd2, 0xbe, 0xe8, 0x7b, 0x1a, 0xbd, 0xb4, 0xbb, 0x8a, 0xbd, 0xef, 0xd4, 0xb5,
    0xbe, 0x45, 0x2d, 0x85, 0x3e, 0x77, 0xab, 0x1c, 0xbf, 0x44, 0xe7, 0x04, 0xbf,
    0x9b, 0x11, 0x87, 0xbe, 0xf0, 0xcc, 0x82, 0xbe, 0xf0, 0x78, 0x0a, 0x3f, 0xc0,
    0x03, 0x6a, 0xbd, 0xd2, 0x7b, 0xce, 0xbe, 0x87, 0x1a, 0x98, 0x3e, 0xe0, 0x77,
    0x35, 0xbe, 0x7c, 0xfb, 0x9a, 0x3d, 0x32, 0x6d, 0x20, 0x3e, 0x30, 0x19, 0xbc,
    0x3c, 0xb3, 0x0d, 0x3b, 0xbf, 0xa8, 0x3e, 0x1b, 0xbd, 0x9b, 0x03, 0x56, 0xbe,
    0x44, 0xda, 0xf4, 0x3d, 0xf0, 0x41, 0x44, 0x3e, 0x6b, 0x32, 0xc4, 0xbe, 0x1a,
    0x23, 0x67, 0x3e, 0x34, 0xd8, 0x21, 0xbf, 0x25, 0x73, 0x88, 0x3e, 0xb8, 0x66,
    0x82, 0xbe, 0xaf, 0xcd, 0xcd, 0xbe, 0xdc, 0x63, 0xd8, 0x3d, 0x5d, 0x97, 0x87,
    0x3e, 0x9d, 0x1e, 0xb9, 0xbe, 0xdb, 0x3d, 0xdd, 0x3e, 0x20, 0xbd, 0xe7, 0x3c,
    0x6b, 0x96, 0x97, 0xbf, 0x82, 0x1f, 0x49, 0x3e, 0xe8, 0xbb, 0x1f, 0xbe, 0x84,
    0xdd, 0xc3, 0x3d, 0xf2, 0xfb, 0xb1, 0xbe, 0xef, 0xc7, 0xc3, 0xbe, 0x1a, 0xff,
    0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x4a, 0x44, 0x66,
    0xbe, 0xfe, 0x34, 0xb3, 0x3e, 0xb6, 0x4b, 0x0d, 0xbe, 0x80, 0x7d, 0x06, 0xbf,
    0x7e, 0x09, 0xe6, 0xbe, 0xb0, 0xce, 0x09, 0xbf, 0x0c, 0x63, 0xd8, 0xbe, 0x3e,
    0xd9, 0x31, 0xbe, 0x5a, 0x9c, 0x2a, 0xbe, 0x18, 0xf5, 0xc5, 0xbd, 0x91, 0xec,
    0x92, 0x3e, 0x3c, 0x62, 0xca, 0xbd, 0x49, 0xca, 0x68, 0x3e, 0x76, 0x22, 0x57,
    0xbe, 0x51, 0x56, 0x58, 0x3e, 0xb7, 0xa5, 0xae, 0x3e, 0x66, 0xff, 0xff, 0xff,
    0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23,
    0x8d, 0xaa, 0xbd, 0x31, 0x69, 0x8b, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x2f, 0x36, 0xbe,
    0x00, 0x00, 0x00, 0x00, 0xdd, 0x9d, 0x7e, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x2c,
    0xf9, 0xbe, 0xbc, 0x67, 0xb4, 0x5d, 0x3d, 0xb2, 0xff, 0xff, 0xff, 0x04, 0x00,
    0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x9c, 0xe7, 0x13, 0xbf, 0x46, 0x50, 0x2b,
    0xbd, 0x8a, 0xbc, 0x8d, 0x3e, 0xb2, 0xbf, 0x62, 0x3e, 0xf1, 0xb1, 0xa4, 0xbd,
    0xd5, 0xaa, 0x7a, 0x3e, 0x2b, 0xec, 0x8e, 0xbe, 0x06, 0x93, 0x18, 0x3d, 0xbf,
    0xff, 0xc7, 0x3e, 0x82, 0xa7, 0xbc, 0x3e, 0xdb, 0x44, 0x06, 0x3f, 0x3b, 0x6e,
    0x9e, 0x3d, 0x4e, 0x2c, 0xfd, 0x3e, 0x8f, 0xfb, 0x9d, 0xbd, 0xdf, 0xea, 0x87,
    0x3e, 0x62, 0x3d, 0x3c, 0x3c, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc3,
    0x61, 0x79, 0xbe, 0x08, 0xfb, 0xff, 0xff, 0x0c, 0xfb, 0xff, 0xff, 0x0f, 0x00,
    0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72,
    0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08,
    0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00,
    0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x84, 0xfb, 0xff,
    0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xca,
    0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00,
    0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00,
    0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
    0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0a, 0x00, 0x00, 0x00, 0xa4, 0x03, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00, 0xc4,
    0x02, 0x00, 0x00, 0x6c, 0x02, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0xd4, 0x01,
    0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x9a, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a,
    0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x84, 0xfc, 0xff, 0xff, 0x19, 0x00, 0x00,
    0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
    0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0xf2, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00,
    0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10,
    0x00, 0x00, 0x00, 0xdc, 0xfc, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b,
    0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f,
    0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
    0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x82, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00,
    0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x00, 0x00, 0x00, 0x6c, 0xfd, 0xff, 0xff, 0x52, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64,
    0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
    0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x52, 0x65, 0x6c, 0x75,
    0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x7e, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x28, 0x00,
    0x00, 0x00, 0xec, 0xfd, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71,
    0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x5f, 0x35, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xc6, 0xfe,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x34, 0xfe, 0xff, 0xff,
    0x1b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61,
    0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x4d,
    0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x28,
    0x00, 0x00, 0x00, 0x7c, 0xfe, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56,
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xc4, 0xfe, 0xff,
    0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x2f,
    0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56,
    0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x31, 0x2f, 0x64, 0x65,
    0x6e, 0x73, 0x65, 0x5f, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
    0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65,
    0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x2b, 0x00,
    0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f,
    0x31, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x35, 0x2f, 0x42, 0x69, 0x61,
    0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69,
    0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14,
    0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00,
    0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
    0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75,
    0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x33, 0x5f, 0x69, 0x6e,
    0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c,
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
};
const int sine_model_len = 3196;
