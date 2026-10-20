#include "shard/Shard0050.h"

extern "C" {

typedef struct ArchiveRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SndSource *source;
} ArchiveRef;

void nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(ArchiveRef *obj, u32 id)
{
    if (obj->source != NULL) {
        obj->source->vtbl->find(obj->source, id);
    }
}

} /* extern "C" */
