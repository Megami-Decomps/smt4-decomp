/* NON_MATCHING: slot test now indexes from the sound block like retail; retail computes the slot pointer (base+0x6E4 element) before the field stores and keeps it in r7, the build folds the offsets into the stores. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u8 g_asdSoundSystem[];
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
}

/* Apocalypse's current-slot fields extend beyond the shared IV sound layout. */
struct AuxiliarySelectionView {
    u8 unk000[0x6E4];
    AsdSndAuxSlot slots[2];
    u8 unk75C[0xBC0];
    AsdSndAuxSlot *current[2];
};

static __inline AsdSndAuxSlot *asdRestoreAuxSlot(AuxiliarySelectionView *sound, u32 index)
{
    if (index != (u32)-1 && index < 2 && sound->slots[index].heapBase) {
        AsdSndAuxSlot *slot = &sound->slots[index];
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
    AuxiliarySelectionView *sound = reinterpret_cast<AuxiliarySelectionView *>(g_asdSoundSystem);
    sound->current[0] = asdRestoreAuxSlot(sound, first);
    sound->current[1] = asdRestoreAuxSlot(sound, second);
}
