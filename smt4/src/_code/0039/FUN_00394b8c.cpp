#include "common.h"

extern "C" {

s32 jyoucyuGetTableEntry(s32 id);
void asdSoundSelectSlotB(s32 mode);
void asdSoundGetSlotBSavedState(s32 mode);
void soundHeapRestoreClampedState();

/* Starts the mode-two sequence unless its resident entry is already active. */
void FUN_00394b8c()
{
    if (jyoucyuGetTableEntry(1) == 0) {
        asdSoundSelectSlotB(2);
        asdSoundGetSlotBSavedState(2);
        soundHeapRestoreClampedState();
    }
}

}
