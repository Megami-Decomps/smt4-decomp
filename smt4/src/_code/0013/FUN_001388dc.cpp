/* NON_MATCHING: current-slot access loads literal0x1218 and uses register-indexed addressing instead of retail sound+0x1000/offset0x218, with swapped root/slot registers. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_00132da4(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 FUN_002af3b4(SoundArchiveLoader *loader, u32 item, void *heap, u32 flags, u32 mode);

// Reuse loaded archive data, or load it into the current slot's sound heap.
s32 FUN_001388dc(u32 item)
{
    AsdSoundSystem *sound = &g_asdSound;
    s32 result = 0;
    AsdSndSlotA *slot = sound->currentSlotA;
    if (slot != NULL && slot->hasHeap != 0) {
        result = FUN_00132da4(&sound->loaderState.loader, item, 0xffffffff);
        if (result != 0) {
            result = 1;
        }
        else {
            result = FUN_002af3b4(&sound->loaderState.loader, item, slot->heap, 0xffffffff, 0);
        }
    }
    return result;
}
}
