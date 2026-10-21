#include "common.h"

extern "C" {
s32 jyoucyuGetTableEntry(s32 id);
void asdSoundSelectSlotB(s32 mode);
void FUN_002e14e4(s32 mode);
void soundHeapRestoreClampedState();
/* Starts the mode-two sequence when the resident entry is absent. */
void FUN_00394a50()
{
    if (jyoucyuGetTableEntry(1) == 0) {
        asdSoundSelectSlotB(2);
        FUN_002e14e4(2);
        soundHeapRestoreClampedState();
    }
}
}
