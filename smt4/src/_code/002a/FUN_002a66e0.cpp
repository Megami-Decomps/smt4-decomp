/* NON_MATCHING: Type-comparison CSE, saved registers and float-result hoisting differ; unsupported pairs retain retail's undefined return. */
#include "common.h"

/* Maps GL texture format/type pairs to the hardware format and returns the storage bytes per pixel. */
extern "C" f32 FUN_002a66e0(s32 format, s32 type, u32 *hardwareFormat)
{
    u32 selected;
    f32 bytesPerPixel;
    bool supported = true;
    switch (format) {
    case 0x1908:
    case 0x6752:
        if (type == 0x1401) {
            selected = 0;
            bytesPerPixel = 4.0f;
        } else if (type == 0x8033) {
            selected = 4;
            bytesPerPixel = 2.0f;
        } else if (type == 0x8034) {
            selected = 2;
            bytesPerPixel = 2.0f;
        } else {
            supported = false;
        }
        break;
    case 0x1907:
    case 0x6754:
        if (type == 0x1401) {
            selected = 1;
            bytesPerPixel = 3.0f;
        } else if (type == 0x8363) {
            selected = 3;
            bytesPerPixel = 2.0f;
        } else {
            supported = false;
        }
        break;
    case 0x190A:
    case 0x6758:
        if (type == 0x1401) {
            selected = 5;
            bytesPerPixel = 2.0f;
        } else if (type == 0x6760) {
            selected = 9;
            bytesPerPixel = 1.0f;
        } else {
            supported = false;
        }
        break;
    case 0x6700:
    case 0x6759:
        selected = 6;
        bytesPerPixel = 2.0f;
        break;
    case 0x1909:
    case 0x6757:
        if (type == 0x1401) {
            selected = 7;
            bytesPerPixel = 1.0f;
        } else if (type == 0x6761) {
            selected = 10;
            bytesPerPixel = 0.5f;
        } else {
            supported = false;
        }
        break;
    case 0x1906:
    case 0x6756:
        if (type == 0x1401) {
            selected = 8;
            bytesPerPixel = 1.0f;
        } else if (type == 0x6761) {
            selected = 11;
            bytesPerPixel = 0.5f;
        } else {
            supported = false;
        }
        break;
    case 0x675A:
        selected = 12;
        bytesPerPixel = 0.5f;
        break;
    case 0x675B:
        selected = 13;
        bytesPerPixel = 1.0f;
        break;
    default:
        supported = false;
        break;
    }
    if (supported) {
        *hardwareFormat = selected;
        return bytesPerPixel;
    }
    /* Retail leaves both the output and the floating return register unspecified here. */
}
