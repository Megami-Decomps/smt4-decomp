/* NON_MATCHING: the sample is shifted into a fresh register (r2) where retail reuses the state-pointer register (r0). */
#include "common.h"

extern "C" {
extern u32 g_lcgRandomRangeState;

f32 FUN_00270c18(void)
{
    u32 *state = &g_lcgRandomRangeState;
    u32 next = *state * 0x41C64E6Du + 0x3039u;
    *state = next;

    const u32 sample = next >> 16;
    return static_cast<f32>(sample) * 0.00001525902189314365386962890625f;
}
}
