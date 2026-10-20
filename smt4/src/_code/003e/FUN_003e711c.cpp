/* Copies the parameters of the sound with this archive reference's key into `out`; returns 1 if it exists and has sound type 2. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

struct SoundTypeParams {
    /* 0x00 */ u16 word0;
    /* 0x02 */ u16 word1;
    /* 0x04 */ u8 byte4;
};

struct SoundTypeInfo {
    /* 0x00 */ u16 word0;
    /* 0x02 */ u16 word1;
};

SoundTypeInfo *offsetRefResolve10(SoundInfo *info);
s32 FUN_003e68a0(SoundTypeInfo *typeInfo);

s32 FUN_003e711c(SoundArchiveRef *ref, u32 unused, SoundTypeParams *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);
    SoundTypeInfo *typeInfo;

    if (info == NULL) {
        return 0;
    }
    if (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info) != 2) {
        return 0;
    }
    typeInfo = offsetRefResolve10(info);
    out->word0 = typeInfo->word0;
    out->word1 = typeInfo->word1;
    out->byte4 = FUN_003e68a0(typeInfo);
    return 1;
}

}
