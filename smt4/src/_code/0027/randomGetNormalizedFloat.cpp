#include "common.h"

extern "C" {

extern u32 g_lcgSeed;

static __inline u32 randomNext(void)
{
    return g_lcgSeed = g_lcgSeed * 0x41C64E6D + 12345;
}

/* Advance the linear-congruential generator and scale its high halfword to [0, 1]. */
f32 randomGetNormalizedFloat(void)
{
    return (f32)(randomNext() >> 16) * 1.5259021893143654e-05f;
}

}
