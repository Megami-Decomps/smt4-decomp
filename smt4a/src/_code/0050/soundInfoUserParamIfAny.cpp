#include "shard/Shard0050.h"

extern "C" {

typedef struct Info3C {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 info;
} Info3C;

extern s32 nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(u32 info);
extern void nw_snd_internal_SoundArchiveFile_SoundInfo_GetUserParam(void);

void soundInfoUserParamIfAny(Info3C *obj)
{
    if (nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(obj->info) != 0) {
        nw_snd_internal_SoundArchiveFile_SoundInfo_GetUserParam();
    }
}

} /* extern "C" */
