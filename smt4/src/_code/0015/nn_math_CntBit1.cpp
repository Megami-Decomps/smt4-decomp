#include "common.h"

extern "C" {

/* Population count: the number of set bits in `x` (parallel bit-sum). */
u32 nn_math_CntBit1(u32 x)
{
    x = x - ((x >> 1) & 0x55555555);
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = (x + (x >> 4)) & 0x0f0f0f0f;
    x = x + (x >> 8);
    return (x + (x >> 16)) & 0x3f;
}

} /* extern "C" */
