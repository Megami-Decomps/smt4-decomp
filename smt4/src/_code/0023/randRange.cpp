#include "common.h"
#include "shard/randRange.h"

extern "C" {

extern u32 g_randState;    /* LCG state */

/* Advances the linear congruential generator (state * 0x41c64e6d + 0x3039) and returns a value in [0, range]. */
u32 randRange(int range)
{
    u32 *seed = &g_randState;

    *seed = *seed * 0x41c64e6d + 0x3039;
    return (*seed >> 16) * (range + 1) >> 16;
}

} /* extern "C" */
