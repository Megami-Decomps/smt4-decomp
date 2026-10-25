/* NON_MATCHING: the sample is shifted into a fresh register (r2) where retail reuses the state-pointer register (r0). */
#include "common.h"

extern "C" {
extern u32 g_randState;

f32 FUN_0025cb1c(void)
{
    u32 *state = &g_randState;
    u32 next = 0x41c64e6dU * *state + 0x3039U;
    *state = next;
    u32 sample = next >> 16;
    return static_cast<f32>(sample) * 0.00001525902189314365386962890625f;
}
}
