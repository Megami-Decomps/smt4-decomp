/* NON_MATCHING: retail preserves x/y in ip/r4 and saves r4/r5; compiled wrapper converts directly without saving registers. */
#include "common.h"
#include "shard/FUN_0025cc78.h"

extern "C" void FUN_00180998(const void* text, u32 start, s32 length,
                             f32 x, f32 y, f32 opacity, f32 scale);

// Draw the full text with integer coordinates and an 8-bit fade amount.
extern "C" void FUN_0025cc78(const void* text, s32 x, s32 y, s32 fade, f32 scale)
{
    FUN_00180998(text, 0, -1, (f32)x, (f32)y, (f32)(256 - fade) / 256.0f, scale);
}
