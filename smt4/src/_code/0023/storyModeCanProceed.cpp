#include "common.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);
void *qcGetCenterSlotGroups(u32 index);
s32 objectFlagBitIsSet(void *object, u32 bit);
}

// Test whether the first mode may proceed under the relevant story and object flags.
extern "C" s32 storyModeCanProceed(u32 mode)
{
    if (mode != 1)
        return 0;
    if (!gameFlagIsSet(0x235))
        return 0;
    if (!gameFlagIsSet(448) || !gameFlagIsSet(0x424))
        return 1;
    return objectFlagBitIsSet(qcGetCenterSlotGroups(1), 4) != 0;
}
