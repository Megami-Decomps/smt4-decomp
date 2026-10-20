/* Copies the 3D parameters of the sound with this archive reference's key into `out`; returns 1 if it exists. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

typedef struct Sound3DInfo {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
} Sound3DInfo;

extern Sound3DInfo *nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo(SoundInfo *info);

u8 FUN_003e7084(SoundArchiveRef *ref, u32 unused, Sound3DInfo *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);
    Sound3DInfo *src;

    if (info == NULL) {
        return 0;
    }
    src = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo(info);
    if (src == NULL) {
        return 0;
    }
    out->unk00 = src->unk00;
    out->unk04 = src->unk04;
    out->unk08 = src->unk08;
    out->unk09 = src->unk09;
    return 1;
}

}
