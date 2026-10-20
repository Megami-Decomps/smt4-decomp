/* NON_MATCHING: the state address and the multiplier are loaded from the pool in the opposite order (retail: r1 = &g_randState, r2 = multiplier). */
#include "common.h"

extern "C" {

extern u32 g_randState;

/* Linear congruential generator step; returns a value in [0, max] scaled from the top 16 bits of the state. */
u32 randRange(s32 max)
{
    g_randState = g_randState * 0x41C64E6D + 0x3039;
    return (g_randState >> 16) * (max + 1) >> 16;
}

}
