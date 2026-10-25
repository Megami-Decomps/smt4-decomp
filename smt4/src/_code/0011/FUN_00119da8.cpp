/* NON_MATCHING: current-slot address materialization and local allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" AsdSoundSystem g_asdSound;
extern "C" void FUN_002bda30(s32 handle, s32 fadeFrames);
extern "C" void nw_snd_SoundHeap_LoadState(void *heap, u32 state);

// Select an active four-handle slot, optionally restoring its saved heap state.
extern "C" s32 FUN_00119da8(u32 index)
{
    AsdSoundSystem *sound = &g_asdSound;
    AsdSndSlotA **currentSlot = &sound->currentSlotA;
    AsdSndSlotA *slot; /* Read before it is ever set, as in the original. */
    s32 selected = 0;
    if (index == (u32)-1) {
        *currentSlot = NULL;
    } else if (index < 4 && sound->slotsA[index].active != 0) {
        if (slot != NULL) {
            slot = &sound->slotsA[index];
            for (s32 i = 0; i < 4; ++i) {
                if (slot->handles[i] != 0)
                    FUN_002bda30(slot->handles[i], 0);
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
