#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSoundSystem g_asdSound;

void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

/* Resets an auxiliary slot's volume and restores its heap to the saved state. */
static __inline void asdSndAuxSlotRestore(AsdSndAuxSlot *slot)
{
    slot->volume = ASD_SND_VOLUME_DEFAULT;
    slot->unk34 = 0;
    slot->unk38 = 0;
    nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
}

/* Selects two auxiliary slots, restoring each selected heap to its saved state; an index of -1, out of
 * range or naming a slot without a heap selects none. */
void asdSoundAuxSlotsSelect(u32 first, u32 second)
{
    AsdSoundSystem *sound = &g_asdSound;

    if (first != (u32)-1 && first < 2 && sound->auxSlots[first].heapBase != NULL) {
        asdSndAuxSlotRestore(&sound->auxSlots[first]);
        sound->currentAux0 = &sound->auxSlots[first];
    } else {
        sound->currentAux0 = NULL;
    }

    if (second != (u32)-1 && second < 2 && sound->auxSlots[second].heapBase != NULL) {
        asdSndAuxSlotRestore(&sound->auxSlots[second]);
        sound->currentAux1 = &sound->auxSlots[second];
    } else {
        sound->currentAux1 = NULL;
    }
}

} /* extern "C" */
