/* Copies the sequence sound parameters of the sound with this archive reference's key into `out`;
 * returns 1 if it exists and is a sequence sound. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

SequenceSoundInfo *FUN_001522a0(SoundInfo *info);

s32 FUN_0014d538(SoundArchiveRef *ref, u32 unused, SequenceSoundParams *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);
    SequenceSoundInfo *seq;

    if (info == NULL) {
        return 0;
    }
    if (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info) != 1) {
        return 0;
    }
    seq = FUN_001522a0(info);
    out->startOffset = nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset(seq);
    out->unk14 = seq->unk08;
    out->channelPriority = nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority(seq);
    out->releasePriorityFix = nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix(seq);
    nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds(seq, out->bankIds);
    return 1;
}

}
