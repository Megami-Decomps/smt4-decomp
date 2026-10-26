#include "common.h"

extern "C" {
s32 btlAdjustPropertyClamped(u32 target, s32 command, u32 a, u32 b);

static __inline s32 absValue(s32 value)
{
    return value < 0 ? -value : value;
}

// Run selected channel commands and sum the magnitudes of their query results.
s32 channelRunMagnitudeQueries(u32 target, s32 channel, u32 a, u32 b)
{
    s32 total = 0;
    if (channel == 0 || channel == 3) {
        total += absValue(btlAdjustPropertyClamped(target, 7, a, b));
        btlAdjustPropertyClamped(target, 8, a, b);
    }
    if (channel == 1 || channel == 3) {
        total += absValue(btlAdjustPropertyClamped(target, 10, a, b));
    }
    if (channel == 2 || channel == 3) {
        total += absValue(btlAdjustPropertyClamped(target, 11, a, b));
        btlAdjustPropertyClamped(target, 9, a, b);
    }
    return total;
}
}
