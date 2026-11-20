#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
s32 soundArchiveLoaderIsItemLoaded(SoundLoader* loader, u32 id, u32 flags);
s32 soundArchiveLoaderLoadItem(SoundLoader* loader, u32 id, void* heap, u32 flags, u32 blockSize);

u32 asdSoundEnsureArchiveItemLoaded(u32 id)
{
    AsdSoundSystemA* system = &g_asdSoundSystem;
    u32 result = 0;
    AsdSndSlotA* slot = g_asdSoundSystem.currentSlotA;
    if (slot != NULL && slot->hasHeap) {
        if (soundArchiveLoaderIsItemLoaded(&system->loaderState.loader, id, 0xffffffff)) {
            result = 1;
        } else {
            result = soundArchiveLoaderLoadItem(&system->loaderState.loader, id, slot->heap, 0xffffffff, 0);
        }
    }
    return result;
}
}
