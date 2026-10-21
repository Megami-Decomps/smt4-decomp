/* NON_MATCHING: retail saves a separate zero failure result in r5; compiler returns immediate zero and hoists r1 setup before the signed slot split. */
#include "common.h"

extern "C" {
u32 jyoucyuGetTableEntry(u32 index);
s32 FUN_002d6058(u32 index, s32 frames);
s32 soundSlotApplyTransition(u32 index, s32 frames);

// Stop an ordinary or extended sound slot immediately when the resident guard is clear.
u32 soundSlotStopById(u32 id)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return 0;
    }
    if (static_cast<s32>(id) >= 100000) {
        return FUN_002d6058(id - 100000, 0);
    }
    return soundSlotApplyTransition(id, 0);
}
}
