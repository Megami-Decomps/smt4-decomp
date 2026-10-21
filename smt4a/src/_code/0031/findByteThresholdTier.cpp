#include "common.h"

extern "C" {
extern const u8 DAT_00536266[11];

// Return the first threshold tier that contains value, or zero when none does.
u8 findByteThresholdTier(u32 value)
{
    for (s32 tier = 0; tier < 11; ++tier) {
        if (value <= DAT_00536266[tier]) {
            return tier;
        }
    }
    return 0;
}
}
