/* NON_MATCHING: sound-slot base-address hoisting, registers and null-test branches differ from retail. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u8 g_asdSoundSystem[];
void nw_snd_SoundHeap_LoadState(void *heap, u32 state);
}

static __inline AsdSndAuxSlot *asdRestoreAuxSlot(AsdSndAuxSlot *slots, u32 index)
{
    if (index != (u32)-1 && index < 2 && slots[index].heapBase) {
        AsdSndAuxSlot *slot = &slots[index];
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
    /* Apocalypse's current-slot fields extend beyond the shared IV sound layout. */
    struct AuxiliarySelectionView {
        u8 unk000[0x6E4];
        AsdSndAuxSlot slots[2];
        u8 unk75C[0xBC0];
        AsdSndAuxSlot *current[2];
    };
    AuxiliarySelectionView *sound = reinterpret_cast<AuxiliarySelectionView *>(g_asdSoundSystem);
    sound->current[0] = asdRestoreAuxSlot(sound->slots, first);
    sound->current[1] = asdRestoreAuxSlot(sound->slots, second);
}
