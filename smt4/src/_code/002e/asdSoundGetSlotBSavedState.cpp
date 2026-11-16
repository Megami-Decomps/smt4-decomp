#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;

/* Returns the saved heap state of second-kind sound slot `index`, or -1 when the index is out of
 * range or the slot has no heap. */
u32 asdSoundGetSlotBSavedState(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    u32 state = 0xffffffff;
    if (index < ASD_SND_SLOT_B_COUNT) {
        AsdSndSlotB *slot = &sound->slotsB[index];
        if (slot->heapBase != NULL) {
            state = slot->savedState;
        }
    }
    return state;
}
}
