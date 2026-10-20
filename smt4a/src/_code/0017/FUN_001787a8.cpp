#include "shard/S2SoundLoader.h"

extern "C" {

extern s32 nw_snd_SoundArchive_IsAvailable(void *archive);
extern s32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
extern s32 FUN_00194d6c(SoundLoader *loader, u32 id, u32 flags);
extern s32 nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded(SoundLoader *loader, u32 id, u32 flags);
extern s32 FUN_001788b8(SoundLoader *loader, u32 id, u32 flags);
extern s32 FUN_001785f0(SoundLoader *loader, u32 id, u32 flags);
extern s32 FUN_00194c68(SoundLoader *loader, u32 waveArchiveId, u32 waveIndex);
extern u32 FUN_001a8e14(void *archive, u32 id);

/* Dispatches on the kind of archive item `id` names and loads (or checks) its data;
 * returns 0 for unknown ids. */
s32 FUN_001787a8(SoundLoader *loader, u32 id, u32 flags)
{
    if (loader->archive != NULL && nw_snd_SoundArchive_IsAvailable(loader->archive) != 0 && id != 0xffffffff) {
        switch (id >> 24) {
        case SND_ITEM_SOUND: {
            s32 type = nw_snd_SoundArchive_GetSoundType(loader->archive, id);

            if (type == SND_SOUND_TYPE_STREAM) {
                return FUN_00194d6c(loader, id, flags);
            }
            if (type == SND_SOUND_TYPE_WAVE) {
                return nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded(loader, id, flags);
            }
            break;
        }
        case SND_ITEM_BANK:
            return FUN_001785f0(loader, id, flags);
        case SND_ITEM_WAVE_ARCHIVE:
            return FUN_00194c68(loader, id, 0xffffffff);
        case SND_ITEM_GROUP:
            return loader->vtbl->isFileLoaded(loader, FUN_001a8e14(loader->archive, id)) != 0;
        case SND_ITEM_SOUND_GROUP:
            return FUN_001788b8(loader, id, flags);
        }
    }
    return 0;
}

} /* extern "C" */
