/* NON_MATCHING: 68 lines: retail keeps 2.0, 1.0 and 0.5 in s1-s3 and copies them into s0 at shared blocks (armcc here keeps 2.0 in s0), which moves the 0x675A/0x675B tails. */
#include "common.h"

/* The hardware texture formats. */
enum {
    TextureRgba8, TextureRgb8, TextureRgba5551, TextureRgb565, TextureRgba4444,
    TextureLuminanceAlpha8, TextureHilo8, TextureLuminance8, TextureAlpha8,
    TextureLuminanceAlpha4, TextureLuminance4, TextureAlpha4, TextureEtc1, TextureEtc1Alpha4
};

/* Maps GL/DMP texture format and element type pairs to the hardware format and returns the storage
 * bytes per pixel. Callers must supply a supported pair: retail leaves the output and the result unset otherwise. */
extern "C" f32 texFormatGetBytesPerPixel(s32 format, s32 type, u32 *hardwareFormat)
{
    u32 selected;
    f32 bytesPerPixel;
    bool supported = true;
    switch (format) {
    case 0x1908: /* RGBA */
    case 0x6752:
        switch (type) {
        case 0x1401:
            selected = TextureRgba8;
            bytesPerPixel = 4.0f;
            break;
        case 0x8033:
            selected = TextureRgba4444;
            bytesPerPixel = 2.0f;
            break;
        case 0x8034:
            selected = TextureRgba5551;
            bytesPerPixel = 2.0f;
            break;
        default:
            supported = false;
            break;
        }
        break;
    case 0x1907: /* RGB */
    case 0x6754:
        switch (type) {
        case 0x1401:
            selected = TextureRgb8;
            bytesPerPixel = 3.0f;
            break;
        case 0x8363:
            selected = TextureRgb565;
            bytesPerPixel = 2.0f;
            break;
        default:
            supported = false;
            break;
        }
        break;
    case 0x190A: /* LUMINANCE_ALPHA */
    case 0x6758:
        switch (type) {
        case 0x1401:
            selected = TextureLuminanceAlpha8;
            bytesPerPixel = 2.0f;
            break;
        case 0x6760:
            selected = TextureLuminanceAlpha4;
            bytesPerPixel = 1.0f;
            break;
        default:
            supported = false;
            break;
        }
        break;
    case 0x6700:
    case 0x6759:
        selected = TextureHilo8;
        bytesPerPixel = 2.0f;
        break;
    case 0x1909: /* LUMINANCE */
    case 0x6757:
        switch (type) {
        case 0x1401:
            selected = TextureLuminance8;
            bytesPerPixel = 1.0f;
            break;
        case 0x6761:
            selected = TextureLuminance4;
            bytesPerPixel = 0.5f;
            break;
        default:
            supported = false;
            break;
        }
        break;
    case 0x1906: /* ALPHA */
    case 0x6756:
        switch (type) {
        case 0x1401:
            selected = TextureAlpha8;
            bytesPerPixel = 1.0f;
            break;
        case 0x6761:
            selected = TextureAlpha4;
            bytesPerPixel = 0.5f;
            break;
        default:
            supported = false;
            break;
        }
        break;
    case 0x675A:
        selected = TextureEtc1;
        bytesPerPixel = 0.5f;
        break;
    case 0x675B:
        selected = TextureEtc1Alpha4;
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
}
