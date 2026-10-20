/* Copies the common parameters of the sound with this archive reference's key into `out`; returns 1 if it exists. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

s32 FUN_0014d404(SoundArchiveRef *ref, u32 unused, SoundParams *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);

    if (info == NULL) {
        return 0;
    }
    out->id = info->id;
    out->unk04 = info->unk04;
    out->unk10 = info->unk08;
    out->panMode = nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanMode(info);
    out->panCurve = nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanCurve(info);
    out->playerPriority = nw_snd_internal_SoundArchiveFile_SoundInfo_GetPlayerPriority(info);
    out->actorPlayerId = nw_snd_internal_SoundArchiveFile_SoundInfo_GetActorPlayerId(info);
    out->frontBypass = nw_snd_internal_SoundArchiveFile_SoundInfo_IsFrontBypass(info);
    return 1;
}

}
