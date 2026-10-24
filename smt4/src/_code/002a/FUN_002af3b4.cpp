/* NON_MATCHING: readable rebuild of the sound-archive load dispatcher; retail reads the busy flag before bumping the depth counter, shares one `mov r0, #0` exit between the busy and unknown-kind paths and keeps a zero register for the final flag clear, which armcc here lays out differently. */
#include "common.h"

/* The sound loader: its archive and a re-entrancy count. */
struct SoundLoader {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ void *archive;
    /* 0x008 */ u8 unk008[0x200];
    /* 0x208 */ u16 depth;      /* load calls in progress */
    /* 0x20A */ u8 busy;        /* a load is already running: nested loads fail */
};

extern "C" {
s32 FUN_002bf684(void);
u32 FUN_002ac780(void *archive, u32 id);
s32 FUN_00141fd0(void *archive, u32 id);
s32 FUN_001308dc(SoundLoader *loader, s32 impl, s32 arg, u32 extra);
s32 FUN_00140bfc(SoundLoader *loader, u32 id, s32 arg, u32 flags, u32 extra);
s32 nw_snd_internal_SoundArchiveLoader_LoadImpl(SoundLoader *loader, u32 id, s32 arg, u32 extra, s32 flag);
s32 nw_snd_internal_SoundArchiveLoader_LoadSequenceSound(SoundLoader *loader, u32 id, s32 arg, u32 flags, u32 extra);
s32 nw_snd_internal_SoundArchiveLoader_LoadSoundGroup(SoundLoader *loader, u32 id, s32 arg, u32 flags, u32 extra);
s32 nw_snd_internal_SoundArchiveLoader_LoadWaveSound(SoundLoader *loader, u32 id, s32 arg, u32 flags, u32 extra, s32 index);

/* Loads the sound, sequence, group or bank with `id` (the id's top byte is its kind) and returns
 * whether it loaded; nested calls while a load is running are refused. */
s32 FUN_002af3b4(SoundLoader *loader, u32 id, s32 arg, u32 flags, u32 extra)
{
    if (loader->archive == NULL || FUN_002bf684() == 0 || id == 0xFFFFFFFF || arg == 0)
        return 0;
    s32 result;
    loader->depth++;
    if (loader->busy) {
        result = 0;
    } else {
        switch (id >> 24) {
        case 1: {
            s32 kind = FUN_00141fd0(loader->archive, id);
            if (kind == 1)
                result = nw_snd_internal_SoundArchiveLoader_LoadSequenceSound(loader, id, arg, flags, extra);
            else if (kind == 3)
                result = nw_snd_internal_SoundArchiveLoader_LoadWaveSound(loader, id, arg, flags, extra, -1);
            else
                result = 0;
            break;
        }
        case 3:
            result = FUN_00140bfc(loader, id, arg, flags, extra);
            break;
        case 5:
            result = 1;
            if (flags & 8) {
                u32 resolved = FUN_002ac780(loader->archive, id);
                if (!nw_snd_internal_SoundArchiveLoader_LoadImpl(loader, resolved, arg, extra, 1))
                    result = 0;
            }
            break;
        case 6: {
            u32 resolved = FUN_002ac780(loader->archive, id);
            s32 impl = nw_snd_internal_SoundArchiveLoader_LoadImpl(loader, resolved, arg, extra, 1);
            if (impl)
                result = FUN_001308dc(loader, impl, arg, extra);
            else
                result = 0;
            break;
        }
        case 2:
            result = nw_snd_internal_SoundArchiveLoader_LoadSoundGroup(loader, id, arg, flags, extra);
            break;
        default:
            result = 0;
            break;
        }
    }
    loader->depth--;
    if (loader->depth == 0)
        loader->busy = 0;
    return result;
}

} /* extern "C" */
