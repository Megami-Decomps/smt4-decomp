#include "shard/Shard0031.h"

extern "C" {

/* True when `value` is at most 20% of `total` (but at least 1.0 in 20.12 fixed point). */
u8 valueAtMostFifthOfTotal(s32 value, s32 total)
{
    u32 threshold = ((total << 12) / 100) * 20;

    if (threshold < 0x1000) {
        threshold = 0x1000;
    }
    return (u32)(value << 12) <= threshold;
}

} /* extern "C" */
