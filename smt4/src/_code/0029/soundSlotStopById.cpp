/* NON_MATCHING: prologue/result register now match; retail sets up r1 = 0 after the epilogue pop (tail-call argument) and has no trailing pop. */
#include "common.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
s32 soundStopSlotWithFade(u32 index, s32 frames);
s32 soundSlotApplyTransition(u32 index, s32 frames);

// Stop an ordinary or extended sound slot immediately when the resident guard is clear.
u32 soundSlotStopById(u32 id)
{
    u32 result = 0;
    if (jyoucyuGetTableEntry(1) != 0) {
        return result;
    }
    if (static_cast<s32>(id) >= 100000) {
        return soundStopSlotWithFade(id - 100000, 0);
    }
    return soundSlotApplyTransition(id, 0);
}
}
