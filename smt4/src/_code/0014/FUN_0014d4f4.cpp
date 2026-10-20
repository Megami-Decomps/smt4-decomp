/* Reads the sound group info of the archive reference's group key into `out` (id, count, data pointer). */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

struct SoundGroupInfo {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 count;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 dataOffset; /* from the start of this record */
};

struct SoundGroupOut {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 count;
    /* 0x08 */ void *data;
};

extern SoundGroupInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(void *infoBlock);

u8 FUN_0014d4f4(SoundArchiveRef *ref, u32 unused, SoundGroupOut *out)
{
    SoundGroupInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(ref->infoBlock);

    if (info != NULL) {
        out->id = info->id;
        out->count = info->count;
        out->data = (u8 *)info + info->dataOffset;
    }
    return info != NULL;
}

}
