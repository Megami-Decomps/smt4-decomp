/* NON_MATCHING: retail uses VFP comparisons for both clamp bounds; the build converts the upper-bound comparison to an integer bit comparison. */
#include "common.h"

static __inline u32 colorEncodeChannel(f32 value)
{
    f32 clamped = 1.0f;
    if (value <= 1.0f) {
        clamped = value;
        if (value < 0.0f) {
            clamped = 0.0f;
        }
    }
    return (u32)(clamped * 255.0f + 0.5f) & 0xff;
}

// Clamp normalized RGBA components and round them into a packed byte color.
extern "C" u32 FUN_001931d8(const f32 *rgba)
{
    u32 red = colorEncodeChannel(rgba[0]);
    u32 green = colorEncodeChannel(rgba[1]);
    u32 blue = colorEncodeChannel(rgba[2]);
    u32 alpha = colorEncodeChannel(rgba[3]);
    return (alpha << 24) | ((blue & 0xff) << 16) | ((green & 0xff) << 8) | (red & 0xff);
}
