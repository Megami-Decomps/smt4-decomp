/* NON_MATCHING: compiler removes retail's redundant global-address check and schedules index validation differently. */
#include "common.h"

namespace { struct Effect { u8 padding[0x9c]; u32 value; }; struct Effects { u8 padding[0x87c]; Effect *entries[16]; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Effects DAT_004e26ec;
u32 FUN_002ebc34(s32 index)
{
    if (index < 0 || index >= 16 || DAT_004e26ec.entries[index] == NULL) {
        return 0xffffffff;
    }
    return DAT_004e26ec.entries[index]->value;
}
}
