/* True when current is at most 20% of max (both scaled by 0x1000), with the threshold floored at 1. */
#include "common.h"

extern "C" {

u8 isLowThreshold(s32 current, s16 max)
{
    u32 limit = ((max << 12) / 100) * 20;

    if (limit < 0x1000) {
        limit = 0x1000;
    }
    return (u32)(current << 12) <= limit;
}

} /* extern "C" */
