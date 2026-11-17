/* NON_MATCHING: slot test now indexes from the sound block like retail; retail computes the slot pointer (base+0x6E4 element) before the field stores and keeps it in r7, the build folds the offsets into the stores. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
}

static __inline AsdSndAuxSlot *asdRestoreAuxSlot(AsdSoundSystemA *sound, u32 index)
{
    if (index != (u32)-1 && index < 2 && sound->auxSlots[index].heapBase) {
        AsdSndAuxSlot *slot = &sound->auxSlots[index];
        slot->volume = ASD_SND_VOLUME_DEFAULT;
        slot->unk34 = 0;
        slot->unk38 = 0;
        nw_snd_SoundHeap_LoadState(slot->heap, slot->savedState);
        return slot;
    }
    return NULL;
}

/* Select two auxiliary slots, restoring each selected heap to its saved state. */
extern "C" void FUN_00169614(u32 first, u32 second)
{
    AsdSoundSystemA *sound = &g_asdSoundSystem;
    sound->currentAux[0] = asdRestoreAuxSlot(sound, first);
    sound->currentAux[1] = asdRestoreAuxSlot(sound, second);
}
