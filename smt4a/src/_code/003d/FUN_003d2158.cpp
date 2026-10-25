/* NON_MATCHING: default result is preserved correctly; forwarded fade argument is still shared before the family test rather than set in each tail-call branch. */
#include "common.h"

struct ResidentTableEntry;

extern "C" {
ResidentTableEntry* jyoucyuGetTableEntry(u32 index);
s32 asdSoundApplyBankValue(u32 index, s32 frames);
s32 asdSoundStopSlot(u32 index, s32 frames);

// Apply the value to the selected sound family unless resident table entry one is active.
u32 FUN_003d2158(s32 soundId, u32 value)
{
    u32 result = 0;
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (soundId >= 100000) {
            return asdSoundApplyBankValue(soundId - 100000, value);
        } else {
            return asdSoundStopSlot(soundId, value);
        }
    }
    return result;
}
}
