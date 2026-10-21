/* NON_MATCHING: retail uses ldr r1, [pc, #44] where the compiled block uses ldr r1, [pc, #44]. */
#include "common.h"

extern "C" {
extern u32 g_randState;

f32 FUN_0025cb1c(void)
{
    g_randState = 0x41c64e6dU * g_randState + 0x3039U;
    u32 sample = g_randState >> 16;
    return static_cast<f32>(sample) * 0.00001525902189314365386962890625f;
}
}
