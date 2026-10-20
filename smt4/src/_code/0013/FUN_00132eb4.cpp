/* NON_MATCHING: register allocation (retail keeps loader in r7/r4 and zero in r9/ip, size in sl), and the extra[] zero stores are merged into a word store; frame layout and control flow match. */
#include "common.h"
#include "shard/S3SoundArchiveLoader.h"

extern "C" {

s32 FUN_0014d4ec(void *archive, u32 item, SoundArchiveIdRange *range);
s32 FUN_0014d478(void *archive, u32 item, u32 *size);
s32 FUN_00141fd0(void *archive, u32 item);
s32 FUN_00141e48(SoundArchiveLoader *loader, u32 item, u32 flags);
u32 FUN_002ac780(void *archive, u32 item);
void FUN_002ac444(WaveSoundFileReader *reader, u32 file);
s32 nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(WaveSoundFileReader *reader, SoundNoteInfo *info, u32 size, u32 arg3);
s32 FUN_002aa984(SoundArchiveLoader *loader, SoundNoteKey key);

/* Loads every item of the range `item` names (a group or bank): plain items one by one, wave
 * sounds with their file and, if asked, their note info. */
s32 FUN_00132eb4(SoundArchiveLoader *loader, u32 item, u32 flags)
{
    SoundArchiveIdRange range;
    u32 size;
    SoundNoteInfo info;
    WaveSoundFileReader reader;

    range.first = 0xFFFFFFFF;
    range.last = 0xFFFFFFFF;
    range.unk08 = 0;

    if (FUN_0014d4ec(loader->archive, item, &range) == 0) {
        return 0;
    }
    s32 kind = FUN_00141fd0(loader->archive, range.first);

    if (kind == 1) {
        for (u32 id = range.first; id <= range.last; id++) {
            if (FUN_00141e48(loader, id, flags) == 0) {
                return 0;
            }
        }
    } else if (kind == 3) {
        for (u32 id = range.first; id <= range.last; id++) {
            s32 loaded = loader->vtbl->loadItem(loader, FUN_002ac780(loader->archive, id));

            if ((flags & SOUNDARCHIVE_LOAD_STRICT) != 0 && loaded == 0) {
                return 0;
            }
            if ((flags & SOUNDARCHIVE_LOAD_NOTEINFO) != 0) {
                info.key.waveIndex = 0;
                info.key.flag0 = 0;
                info.key.flag1 = 0;
                if (FUN_0014d478(loader->archive, id, &size) == 0) {
                    return 0;
                }
                FUN_002ac444(&reader, loaded);
                info.extra.flag[0] = 0;
                info.extra.flag[1] = 0;
                info.extra.flag[2] = 0;
                info.extra.flag[3] = 0;
                info.extra.flag[4] = 0;
                if (nw_snd_internal_WaveSoundFileReader_ReadNoteInfo(&reader, &info, size, 0) == 0) {
                    return 0;
                }
                if (FUN_002aa984(loader, info.key) == 0) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

} /* extern "C" */
