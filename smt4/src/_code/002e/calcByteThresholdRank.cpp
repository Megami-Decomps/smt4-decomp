#include "common.h"

extern "C" {
extern const u8 g_secondaryThresholds[11];

// Finds the first nonzero rank whose byte threshold includes the value.
u32 calcByteThresholdRank(u32 value)
{
    if (value > g_secondaryThresholds[0]) {
        for (s32 rank = 1; rank < 11; ++rank) {
            if (value <= g_secondaryThresholds[rank]) {
                return static_cast<u8>(rank);
            }
        }
    }
    return 0;
}
}
