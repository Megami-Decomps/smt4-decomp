/* NON_MATCHING: retail keeps &g_asdSound + 0x1000 in r4 for both stores and forms the slot pointer after the heap check; built folds the slot offsets and loads each store address from the pool. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern AsdSoundSystem g_asdSound;

void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

/* Points `current` at auxiliary slot `index`, reset and with its heap restored, or at NULL when
 * there is no such slot or it has no heap. */
static void asdSoundAuxSlotSelect(AsdSndAuxSlot **current, u32 index)
{
    if (index != (u32)-1 && index < 2 && g_asdSound.auxSlots[index].heapBase != NULL) {
        AsdSndAuxSlot *slot = &g_asdSound.auxSlots[index];
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->unk34 = 0;
        slot->unk38 = 0;
        nw_snd_SoundHeap_LoadState(slot, slot->savedState);
        *current = slot;
    } else {
        *current = NULL;
    }
}

/* Selects the two auxiliary sound slots. */
void FUN_00126770(u32 first, u32 second)
{
    asdSoundAuxSlotSelect(&g_asdSound.currentAux0, first);
    asdSoundAuxSlotSelect(&g_asdSound.currentAux1, second);
}

} /* extern "C" */
