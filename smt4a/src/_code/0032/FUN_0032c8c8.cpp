/* NON_MATCHING: compiler reduces the sign-bit test to a shift instead of retail's mask and compare. */
#include "common.h"


extern "C" {
/* Reads or computes the requested value. */
u8 FUN_0032c8c8(u32 value)
{
    return (value & 0x80000000) != 0;
}
}
