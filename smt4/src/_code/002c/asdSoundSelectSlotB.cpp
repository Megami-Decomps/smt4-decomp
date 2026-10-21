/* NON_MATCHING: sentinel-clear path branches to its own return block instead of retail's predicated store/return. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;

// Select an initialized eight-handle sound slot; -1 clears the current selection.
u32 asdSoundSelectSlotB(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    if (index == (u32)-1) {
        sound->currentSlotB = NULL;
        return 0;
    }
    u32 result = 0;
    if (index < ASD_SND_SLOT_B_COUNT && sound->slotsB[index].heapBase != NULL) {
        AsdSndSlotB *slot = &sound->slotsB[index];
        sound->currentSlotB = slot;
        result = 1;
        slot->index = index;
    }
    return result;
}
}
