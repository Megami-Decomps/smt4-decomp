/* NON_MATCHING: coordinate preservation, stacked range-argument loads, and VFP scheduling differ from retail. */
#include "common.h"

extern "C" void FUN_00180998(const void* text, u32 start, s32 length,
                             f32 x, f32 y, f32 opacity, f32 scale);

// Draw a text range with integer coordinates and an 8-bit fade amount.
extern "C" void FUN_00164168(const void* text, s32 x, s32 y, s32 fade,
                             u32 start, s32 length, f32 scale)
{
    FUN_00180998(text, start, length, (f32)x, (f32)y,
                 (f32)(256 - fade) / 256.0f, scale);
}
