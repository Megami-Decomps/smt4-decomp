/* NON_MATCHING: the 12-byte note-info struct is initialised differently (retail clears waveIndex's low two bytes only), which shifts the frame and registers. */
#include "shard/S2SoundLoader.h"

extern "C" {

extern s32 soundGroupUpdate(void *archive, u32 id, u32 *range);
extern s32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 id);
extern s32 FUN_00194d6c(SoundLoader *loader, u32 id, u32 flags);
extern u32 FUN_001a8e14(void *archive, u32 id);
extern s32 soundInfoOwnerReadInfo(void *archive, u32 id, u32 *size);
extern void FUN_00190fc8(u8 reader[20], u32 fileData);
extern s32 nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(u8 reader[20], WaveNoteInfo *info, u32 size, u32 flag);
extern s32 FUN_00194c68(SoundLoader *loader, u32 waveArchiveId, u32 waveIndex);

/* Loads (or checks) every sound of a sound group: `range` is first/last sound id; flags 2 and 8
 * ask for the file to be present and its wave note data to be read. Returns 1 when all of
 * them succeed. */
s32 FUN_001788b8(SoundLoader *loader, u32 id, u32 flags)
{
    u32 range[3];
    s32 type;
    u32 sound;

    range[0] = 0xffffffff;
    range[1] = 0xffffffff;
    range[2] = 0;
    if (soundGroupUpdate(loader->archive, id, range) == 0) {
        return 0;
    }
    type = nw_snd_SoundArchive_GetSoundType(loader->archive, range[0]);
    if (type == SND_SOUND_TYPE_STREAM) {
        for (sound = range[0]; sound <= range[1]; sound++) {
            if (FUN_00194d6c(loader, sound, flags) == 0) {
                return 0;
            }
        }
    } else if (type == SND_SOUND_TYPE_WAVE) {
        for (sound = range[0]; sound <= range[1]; sound++) {
            s32 loaded = loader->vtbl->isFileLoaded(loader, FUN_001a8e14(loader->archive, sound));

            if ((flags & 10) != 0 && loaded == 0) {
                return 0;
            }
            if ((flags & 8) != 0) {
                WaveNoteInfo info;
                u32 size;
                u8 reader[20];

                info.waveArchiveId = 0;
                info.waveIndex = 0;
                if (soundInfoOwnerReadInfo(loader->archive, sound, &size) == 0) {
                    return 0;
                }
                FUN_00190fc8(reader, loaded);
                info.unk08[0] = info.unk08[1] = info.unk08[2] = info.unk08[3] = info.unk08[4] = 0;
                if (nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(reader, &info, size, 0) == 0) {
                    return 0;
                }
                if (FUN_00194c68(loader, info.waveArchiveId, info.waveIndex) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
