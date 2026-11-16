#include "common.h"
#include "kernel/jyoucyuGetTableEntry.h"

struct ResidentTableEntry;

extern "C" {
s32 asdSoundApplyBankValue(u32 index, s32 frames);
s32 asdSoundStopSlot(u32 index, s32 frames);

// Apply the value to the selected sound family unless resident table entry one is active.
u32 FUN_003d2158(s32 soundId, u32 value)
{
    u32 result = 0;
    if (jyoucyuGetTableEntry(1) == NULL) {
        if (soundId >= 100000) {
            soundId -= 100000;
            return asdSoundApplyBankValue(soundId, value);
        }
        return asdSoundStopSlot(soundId, value);
    }
    return result;
}
}
