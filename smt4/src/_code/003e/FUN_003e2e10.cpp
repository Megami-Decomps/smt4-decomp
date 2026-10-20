/* NON_MATCHING: same logic as retail but armcc orders the clamps and register allocation differently; VectorFloatToUnsigned is a plain float-to-unsigned conversion here. */
#include "shard/S2GrClear.h"

extern "C" {

/* GL-style buffer formats a clear value is packed for. */
#define GR_FORMAT_RGBA8_NATIVE 0x6050
#define GR_FORMAT_RGBA4 0x8056
#define GR_FORMAT_RGB5_A1 0x8057
#define GR_FORMAT_RGBA8 0x8058
#define GR_FORMAT_RGB565 0x8d62
#define GR_FORMAT_DEPTH16 0x81a5
#define GR_FORMAT_DEPTH24 0x81a6
#define GR_FORMAT_DEPTH24_STENCIL8 0x88f0

extern void FUN_00374030(u32 colorAddress, u32 colorSize, u32 colorValue, u32 colorBits,
                         u32 depthAddress, u32 depthSize, u32 depthValue, u32 depthBits);

/* Clamps a clear-colour channel to [0, 1] and scales it into a `scale`-step integer. */
static __inline u32 clearChannel(f32 value, f32 scale, f32 bias)
{
    if (value > 1.0f) {
        value = 1.0f;
    } else if (value < 0.0f) {
        value = 0.0f;
    }
    return (u32)(value * scale + bias);
}

/* Packs the clear colour for `format` into one 16-bit pixel repeated in both halves, or one 32-bit pixel. */
static __inline u32 repeatHalf(u32 pixel)
{
    return (pixel & 0xffff) | (pixel << 16);
}

/* Sends the clear command for the render target's buffers: `flags` selects colour and/or depth,
 * `color` is RGBA in [0, 1], `depth` in [0, 1] (with `stencil` for combined depth-stencil). */
void FUN_003e2e10(GrSurface *surface, u32 flags, const f32 *color, u32 stencil, f32 depth)
{
    u32 colorAddress = 0;
    u32 colorSize = 0;
    u32 colorValue = 0;
    u32 colorBits = 0;
    u32 depthAddress = 0;
    u32 depthSize = 0;
    u32 depthValue = 0;
    u32 depthBits = 0;

    if (flags & GR_CLEAR_COLOR) {
        u32 r;
        u32 g;
        u32 b;
        u32 a;

        colorAddress = surface->address;
        switch (surface->format) {
        case GR_FORMAT_RGBA8_NATIVE:
        case GR_FORMAT_RGBA8:
            r = clearChannel(color[0], 255.0f, 0.5f) & 0xff;
            g = clearChannel(color[1], 255.0f, 0.5f) & 0xff;
            b = clearChannel(color[2], 255.0f, 0.5f) & 0xff;
            a = clearChannel(color[3], 255.0f, 0.5f) & 0xff;
            colorBits = 32;
            colorValue = a | (b << 8) | (g << 16) | (r << 24);
            break;
        case GR_FORMAT_RGBA4:
            r = clearChannel(color[0], 15.0f, 0.5f) & 0xff;
            g = clearChannel(color[1], 15.0f, 0.5f) & 0xff;
            b = clearChannel(color[2], 15.0f, 0.5f) & 0xff;
            a = clearChannel(color[3], 15.0f, 0.5f) & 0xff;
            colorBits = 16;
            colorValue = repeatHalf(a | (b << 4) | (g << 8) | (r << 12));
            break;
        case GR_FORMAT_RGB5_A1:
            r = clearChannel(color[0], 31.0f, 0.5f) & 0xff;
            g = clearChannel(color[1], 31.0f, 0.5f) & 0xff;
            b = clearChannel(color[2], 31.0f, 0.5f) & 0xff;
            a = clearChannel(color[3], 1.0f, 0.5f) & 0xff;
            colorBits = 16;
            colorValue = repeatHalf(a | (b << 1) | (g << 6) | (r << 11));
            break;
        case GR_FORMAT_RGB565:
            r = clearChannel(color[0], 31.0f, 0.5f) & 0xff;
            g = clearChannel(color[1], 63.0f, 0.5f) & 0xff;
            b = clearChannel(color[2], 31.0f, 0.5f) & 0xff;
            colorBits = 16;
            colorValue = repeatHalf(b | (g << 5) | (r << 11));
            break;
        }
        colorSize = (surface->width * surface->height * colorBits) >> 3;
    }

    if (flags & GR_CLEAR_DEPTH) {
        depthAddress = surface->depthAddress;
        if (depthAddress != 0) {
            switch (surface->depthFormat) {
            case GR_FORMAT_DEPTH16:
                depthBits = 16;
                depthValue = repeatHalf(clearChannel(depth, 65535.0f, 0.0f));
                break;
            case GR_FORMAT_DEPTH24:
                depthBits = 24;
                depthValue = clearChannel(depth, 16777215.0f, 0.0f);
                break;
            case GR_FORMAT_DEPTH24_STENCIL8:
                depthBits = 32;
                depthValue = clearChannel(depth, 16777215.0f, 0.0f) | (stencil << 24);
                break;
            }
        }
        depthSize = (surface->width * surface->height * depthBits) >> 3;
    }
    FUN_00374030(colorAddress, colorSize, colorValue, colorBits, depthAddress, depthSize, depthValue, depthBits);
}

} /* extern "C" */
