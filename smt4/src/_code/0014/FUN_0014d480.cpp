/* Reads the parameters of a wave sound (type 3) with this archive reference's key into `out`; returns 1 on success. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

typedef struct WaveSoundInfo {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} WaveSoundInfo;

typedef struct WaveSoundParams {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 channelPriority;
    /* 0x09 */ u8 releasePriorityFix;
} WaveSoundParams;

extern WaveSoundInfo *FUN_0015226c(SoundInfo *info);
extern s32 nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetChannelPriority(WaveSoundInfo *info);
extern s32 nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetIsReleasePriorityFix(WaveSoundInfo *info);

u8 FUN_0014d480(SoundArchiveRef *ref, u32 unused, WaveSoundParams *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);
    WaveSoundInfo *wave;

    if (info == NULL) {
        return 0;
    }
    if (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info) != 3) {
        return 0;
    }
    wave = FUN_0015226c(info);
    out->unk00 = wave->unk00;
    out->unk04 = wave->unk04;
    out->channelPriority = nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetChannelPriority(wave);
    out->releasePriorityFix = nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetIsReleasePriorityFix(wave) != 0;
    return 1;
}

}
