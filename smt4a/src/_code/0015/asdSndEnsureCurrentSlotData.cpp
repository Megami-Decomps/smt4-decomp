/* Built with the unit's cflags (-O2 -Otime). */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "shard/SoundArchiveWrapper.h"

extern "C" {

s32 soundArchiveReadSoundInfoWithExtension(SoundArchiveWrapperA *archive, u32 soundId, SoundParams *out);
s32 soundArchiveLoaderIsItemLoaded(SoundLoader *loader, u32 id, u32 flags);
s32 soundArchiveLoaderLoadItem(SoundLoader *loader, u32 id, void *heap, u32 flags, u32 blockSize);

/* Make sure a sound's data is loaded: sounds whose player has its own heap need nothing, others load into the shared heap. */
s32 asdSndEnsureCurrentSlotData(u32 soundId)
{
    AsdSoundSystemA *system = &g_asdSoundSystem;
    void *heap = g_asdSoundSystem.currentSlotB; /* the current slot starts with its heap */
    s32 result = 0;
    SoundParams sound;
    ArchivePlayerParams player = {0, 0};
    SoundArchiveWrapperA *archive = (SoundArchiveWrapperA *)system->archive;

    soundArchiveReadSoundInfoWithExtension(archive, soundId, &sound);
    soundArchiveReadPlayerInfoWithExtension(archive, sound.unk04, &player);
    if (player.playerHeapSize != 0) {
        return 1;
    }
    if (heap != NULL) {
        if (soundArchiveLoaderIsItemLoaded(&system->loaderState.loader, soundId, 0xffffffff)) {
            return 1;
        }
        result = soundArchiveLoaderLoadItem(&system->loaderState.loader, soundId, heap, 0xffffffff, 0);
    }
    return result;
}

} /* extern "C" */
