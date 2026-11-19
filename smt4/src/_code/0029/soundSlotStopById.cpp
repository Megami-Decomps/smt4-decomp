#include "sound/soundEffect.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
s32 soundStopSlotWithFade(u32 index, s32 frames);
s32 soundSlotApplyTransition(u32 index, s32 frames);

// Stop an ordinary or extended sound slot immediately when the resident guard is clear.
u32 soundSlotStopById(s32 id)
{
    u32 result = 0;
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (id >= 100000) {
            id -= 100000;
            return soundStopSlotWithFade(id, 0);
        }
        return soundSlotApplyTransition(id, 0);
    }
    return result;
}
}
