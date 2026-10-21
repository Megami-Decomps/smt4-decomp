#include "common.h"

extern "C" const u8 DAT_00407704[11];

// Classify a value by the first threshold that contains it, or return zero.
extern "C" u8 classifyValueByThreshold(u32 value)
{
    for (s32 index = 0; index < 11; ++index) {
        if (value <= DAT_00407704[index]) {
            return index;
        }
    }
    return 0;
}
