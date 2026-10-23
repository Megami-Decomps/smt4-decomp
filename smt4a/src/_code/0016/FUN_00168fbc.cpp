/* NON_MATCHING: format/type switch lowering differs; unsupported combinations have no defined float result in retail. */
#include "common.h"

namespace {
enum TextureFormat {
    TextureRgba8, TextureRgb8, TextureRgba5551, TextureRgb565, TextureRgba4444,
    TextureLuminanceAlpha8, TextureHilo8, TextureLuminance8, TextureAlpha8,
    TextureLuminanceAlpha4, TextureLuminance4, TextureAlpha4, TextureEtc1, TextureEtc1Alpha4
};
static __inline f32 setTextureFormat(u32 *output, TextureFormat format, f32 bytesPerPixel)
{
    *output = format;
    return bytesPerPixel;
}
}

/* Translate standard/DMP pixel format and element type, returning bytes per pixel.
 * Callers must supply a supported combination; the retail routine leaves both outputs undefined otherwise. */
extern "C" f32 FUN_00168fbc(u32 format, u32 elementType, u32 *output)
{
    switch (format) {
    case 0x1908: // RGBA
    case 0x6752:
        if (elementType == 0x1401)
            return setTextureFormat(output, TextureRgba8, 4.0f);
        if (elementType == 0x8033)
            return setTextureFormat(output, TextureRgba4444, 2.0f);
        if (elementType == 0x8034)
            return setTextureFormat(output, TextureRgba5551, 2.0f);
        break;
    case 0x1907: // RGB
    case 0x6754:
        if (elementType == 0x1401)
            return setTextureFormat(output, TextureRgb8, 3.0f);
        if (elementType == 0x8363)
            return setTextureFormat(output, TextureRgb565, 2.0f);
        break;
    case 0x190A: // LUMINANCE_ALPHA
    case 0x6758:
        if (elementType == 0x1401)
            return setTextureFormat(output, TextureLuminanceAlpha8, 2.0f);
        if (elementType == 0x6760)
            return setTextureFormat(output, TextureLuminanceAlpha4, 1.0f);
        break;
    case 0x1909: // LUMINANCE
    case 0x6757:
        if (elementType == 0x1401)
            return setTextureFormat(output, TextureLuminance8, 1.0f);
        if (elementType == 0x6761)
            return setTextureFormat(output, TextureLuminance4, 0.5f);
        break;
    case 0x1906: // ALPHA
    case 0x6756:
        if (elementType == 0x1401)
            return setTextureFormat(output, TextureAlpha8, 1.0f);
        if (elementType == 0x6761)
            return setTextureFormat(output, TextureAlpha4, 0.5f);
        break;
    case 0x6700:
    case 0x6759:
        return setTextureFormat(output, TextureHilo8, 2.0f);
    case 0x675A:
        return setTextureFormat(output, TextureEtc1, 0.5f);
    case 0x675B:
        return setTextureFormat(output, TextureEtc1Alpha4, 1.0f);
    }
}
