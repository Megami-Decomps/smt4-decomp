/* NON_MATCHING: retail uses ldr r1, [pc, #44] where the compiled block uses ldr r1, [pc, #44]. */
#include "common.h"

extern "C" {
extern u32 g_lcgRandomRangeState;

f32 FUN_00270c18(void)
{
    g_lcgRandomRangeState = g_lcgRandomRangeState * 0x41C64E6Du + 0x3039u;

    const u32 sample = g_lcgRandomRangeState >> 16;
    return static_cast<f32>(sample) * 0.00001525902189314365386962890625f;
}
}
