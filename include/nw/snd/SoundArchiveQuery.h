/* nw::snd::internal::SoundArchiveFile queries: small wrappers that look a sound up through the
 * info block of an archive reference and copy its parameters into a caller-provided record. */
#ifndef NW_SND_SOUNDARCHIVEQUERY_H
#define NW_SND_SOUNDARCHIVEQUERY_H

#include "common.h"

/* What the wrappers' object points to at +4: the archive reference holding the info block. */
typedef struct SoundArchiveRef {
    /* 0x00 */ u8 unk00[0x3c];
    /* 0x3c */ void *infoBlock; /* SoundArchiveFile::InfoBlockBody */
} SoundArchiveRef;

typedef struct SoundInfo {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
} SoundInfo;

/* The result of querying a sound's common parameters. */
typedef struct SoundParams {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 actorPlayerId;
    /* 0x0c */ u32 playerPriority;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 panMode;
    /* 0x15 */ u8 panCurve;
    /* 0x16 */ u8 frontBypass;
} SoundParams;

typedef struct SequenceSoundInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} SequenceSoundInfo;

/* The result of querying a sequence sound's parameters. */
typedef struct SequenceSoundParams {
    /* 0x00 */ u32 startOffset;
    /* 0x04 */ s32 bankIds[4];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 channelPriority;
    /* 0x19 */ u8 releasePriorityFix;
} SequenceSoundParams;

#ifdef __cplusplus
extern "C" {
#endif

SoundInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(void *infoBlock);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(SoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanMode(SoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanCurve(SoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetPlayerPriority(SoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetActorPlayerId(SoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_IsFrontBypass(SoundInfo *info);
u32 nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset(SequenceSoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority(SequenceSoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix(SequenceSoundInfo *info);
s32 nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds(SequenceSoundInfo *info, s32 *ids);

#ifdef __cplusplus
}
#endif

#endif
