/* NON_MATCHING: retail retains the zero result in r5 and sets the forwarded argument separately on both exits; compiler uses an immediate zero and merges the argument setup. */
#include "common.h"

struct ResidentTableEntry;

extern "C" {
ResidentTableEntry* jyoucyuGetTableEntry(u32 index);
u32 asdSoundApplyBankValue(u32 index, u32 value);
u32 FUN_002e10ac(u32 index, u32 value);

// Apply the value to the selected sound family unless resident table entry one is active.
u32 FUN_003d2158(s32 soundId, u32 value)
{
    if (jyoucyuGetTableEntry(1) != NULL) {
        return 0;
    }
    if (soundId >= 100000) {
        return asdSoundApplyBankValue(soundId - 100000, value);
    }
    return FUN_002e10ac(soundId, value);
}
}
