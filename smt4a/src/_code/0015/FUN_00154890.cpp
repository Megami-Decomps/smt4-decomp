/* NON_MATCHING: current-slot address materialization and local allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct ApocalypseSoundSlotSelectionView {
    /* 0x0000 */ u8 unk0000[0x764];
    /* 0x0764 */ AsdSndSlotA slotsA[4];
    /* 0x0854 */ u8 unk0854[0xAD0];
    /* 0x1324 */ AsdSndSlotA *currentSlotA;
};
typedef char ApocalypseSoundSlotSelectionLayoutCheck[
    offsetof(ApocalypseSoundSlotSelectionView, slotsA) == 0x764 &&
    offsetof(ApocalypseSoundSlotSelectionView, currentSlotA) == 0x1324 ? 1 : -1];
extern "C" ApocalypseSoundSlotSelectionView g_asdSoundSystem;
extern "C" void asdSoundObjectStop(s32 handle, s32 fadeFrames);
extern "C" void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

// Select an active four-handle slot, optionally restoring its saved heap state.
extern "C" s32 FUN_00154890(u32 index)
{
    ApocalypseSoundSlotSelectionView *sound = &g_asdSoundSystem;
    AsdSndSlotA **currentSlot = &sound->currentSlotA;
    AsdSndSlotA *slot; /* Read before it is ever set, as in the original. */
    s32 selected = 0;
    if (index == (u32)-1) {
        *currentSlot = NULL;
    } else if (index < 4 && sound->slotsA[index].active != 0) {
        if (slot != NULL) {
            slot = &sound->slotsA[index];
            s32 i = 0;
            while (i < 4) {
                if (slot->handles[i] != 0)
                    asdSoundObjectStop(slot->handles[i], 0);
                ++i;
            }
            slot->volume = 0x40;
            if (slot->hasHeap != 0)
                nw_snd_SoundHeap_LoadState(slot, slot->savedState);
        }
        *currentSlot = &sound->slotsA[index];
        selected = 1;
    }
    return selected;
}
