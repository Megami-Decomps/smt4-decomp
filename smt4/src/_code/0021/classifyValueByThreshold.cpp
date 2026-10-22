#include "common.h"

extern "C" const u8 g_primaryThresholds[11];

// Classify a value by the first threshold that contains it, or return zero.
extern "C" u8 classifyValueByThreshold(u32 value)
{
    for (s32 index = 0; index < 11; ++index) {
        if (value <= g_primaryThresholds[index]) {
            return index;
        }
    }
    return 0;
}
