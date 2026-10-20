/* Reads the parameters of a sequence sound (type 2) with this archive reference's key into `out`; returns 1 on success. */
#include "nw/snd/SoundArchiveQuery.h"

extern "C" {

typedef struct SequenceQuery {
    /* 0x00 */ u8 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
} SequenceQuery;

extern SequenceSoundInfo *offsetRefResolve10(SoundInfo *info);
extern u8 FUN_003e68c8(SequenceSoundInfo *seq);
extern u32 FUN_003e6880(SequenceSoundInfo *seq);
extern u32 FUN_003e6860(SequenceSoundInfo *seq);

u8 FUN_003e7174(SoundArchiveRef *ref, u32 unused, SequenceQuery *out)
{
    SoundInfo *info = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock);
    SequenceSoundInfo *seq;

    if (info == NULL) {
        return 0;
    }
    if (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(info) != 2) {
        return 0;
    }
    seq = offsetRefResolve10(info);
    out->unk00 = FUN_003e68c8(seq);
    out->unk04 = FUN_003e6880(seq);
    out->unk08 = FUN_003e6860(seq);
    return 1;
}

}
