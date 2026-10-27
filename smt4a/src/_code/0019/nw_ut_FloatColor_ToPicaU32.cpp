/* NON_MATCHING: the clamp (a helper with minimum/maximum parameters keeps the VFP comparisons) and all four channels now match retail; the build still masks each channel a second time in the final expression (three extra `and` at the end) and loads the 0.0f/1.0f constants after the first component. */
#include "common.h"

static __inline f32 clampValue(f32 value, f32 minimum, f32 maximum)
{
    if (value > maximum)
        return maximum;
    if (value < minimum)
        return minimum;
    return value;
}

static __inline u32 colorEncodeChannel(f32 value)
{
    return (u32)(clampValue(value, 0.0f, 1.0f) * 255.0f + 0.5f) & 0xff;
}

// Clamp normalized RGBA components and round them into a packed byte color.
extern "C" u32 nw_ut_FloatColor_ToPicaU32(const f32 *rgba)
{
    u32 red = colorEncodeChannel(rgba[0]);
    u32 green = colorEncodeChannel(rgba[1]);
    u32 blue = colorEncodeChannel(rgba[2]);
    u32 alpha = colorEncodeChannel(rgba[3]);
    return (alpha << 24) | ((blue & 0xff) << 16) | ((green & 0xff) << 8) | (red & 0xff);
}
