#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 soundArchiveLoaderIsItemLoaded(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 nw_snd_internal_SoundArchiveLoader_Load(SoundArchiveLoader *loader, u32 item, void *heap, u32 flags, u32 mode);

// Reuse loaded archive data, or load it into the current slot's sound heap.
s32 FUN_001388dc(u32 item)
{
    AsdSoundSystem *sound = &g_asdSound;
    s32 result = 0;
    AsdSndSlotA *slot = g_asdSound.currentSlotA;
    if (slot != NULL && slot->hasHeap != 0) {
        result = soundArchiveLoaderIsItemLoaded(&sound->loaderState.loader, item, 0xffffffff);
        if (result != 0) {
            result = 1;
        }
        else {
            result = nw_snd_internal_SoundArchiveLoader_Load(&sound->loaderState.loader, item, slot->heap, 0xffffffff, 0);
        }
    }
    return result;
}
}
