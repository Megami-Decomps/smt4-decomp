#include "common.h"

extern "C" {

extern u32 DAT_004651c0;

static __inline u32 randomNext(void)
{
    return DAT_004651c0 = DAT_004651c0 * 0x41C64E6D + 12345;
}

/* Advance the linear-congruential generator and scale its high halfword to [0, 1]. */
f32 randomGetNormalizedFloat(void)
{
    return (f32)(randomNext() >> 16) * 1.5259021893143654e-05f;
}

}
