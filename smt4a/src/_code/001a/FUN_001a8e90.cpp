#include "common.h"

extern "C" {

u32 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(u32 body);

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 infoBlock;
} Owner;

/* Copies the sound group info into `out`: its first two words and the address its fourth word points to (relative to the info); returns whether the info exists. */
u8 FUN_001a8e90(Owner *owner, u32 unused, u32 *out)
{
    u32 *info;

    info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(owner->infoBlock);
    if (info != NULL) {
        out[0] = info[0];
        out[1] = info[1];
        out[2] = (s32)info + info[3];
    }
    return info != NULL;
}

} /* extern "C" */
