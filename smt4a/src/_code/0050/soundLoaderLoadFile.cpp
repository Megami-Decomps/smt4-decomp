#include "shard/Shard0050.h"

extern "C" {

typedef struct SndLoader SndLoader;
typedef struct SndLoaderVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*load)(SndLoader *obj, u32 id);
} SndLoaderVtbl;
struct SndLoader {
    /* 0x000 */ const SndLoaderVtbl *vtbl;
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u32 archive[0x7C];
    /* 0x1FC */ u8 unk1FC[0x20];
    /* 0x21C */ SndSource *source;
};

extern s32 nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(u32 *archive, u32 id);

void soundLoaderLoadFile(SndLoader *obj, u32 id)
{
    SndSource *source = obj->source;

    if ((source == NULL || source->vtbl->find(source, id) == 0) &&
        nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(obj->archive, id) == 0) {
        obj->vtbl->load(obj, id);
    }
}

} /* extern "C" */
