/* NON_MATCHING: loop shape (retail tests the group count only at the bottom, merging the increment into the range-check branch) and the code shared between the group and bank returns */
#include "shard/S1SoundArchive.h"

extern "C" {

void *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(void *infoBlock, u32 id);
s32 nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void *soundInfo);
SoundGroupInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(void *infoBlock, u32 id);
BankInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(void *infoBlock, u32 id);
u32 *FUN_001bbce8(void *infoBlock); /* the sound group table: its first word is the group count */

/* The file record of a sound group: the record its info points to when it has one. */
static __inline SoundArchiveFileRecord *soundGroupFileRecord(SoundGroupInfo *group)
{
    if (group->fileKind == 0x2205) {
        return (SoundArchiveFileRecord *)((u8 *)group + group->fileOffset);
    }
    return NULL;
}

/* Locate the file record of a sound, sound group or bank id: the record the info points to. */
void *FUN_001b3db0(SoundArchiveFileRef *ref, u32 id)
{
    switch (id >> 24) {
    case SOUND_ARCHIVE_ID_SOUND: {
        void *soundInfo = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(ref->infoBlock, id);

        if (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(soundInfo) == 3) {
            for (u32 i = 0; i < *FUN_001bbce8(ref->infoBlock); i++) {
                SoundGroupInfo *group = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(
                    ref->infoBlock, i | (SOUND_ARCHIVE_ID_SOUND_GROUP << 24));

                if (group->firstId <= id && id <= group->lastId) {
                    SoundArchiveFileRecord *record = soundGroupFileRecord(group);

                    return (u8 *)record + record->offset;
                }
            }
        }
        return NULL;
    }
    case SOUND_ARCHIVE_ID_SOUND_GROUP: {
        SoundArchiveFileRecord *record = soundGroupFileRecord(
            nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(ref->infoBlock, id));

        return (u8 *)record + record->offset;
    }
    case SOUND_ARCHIVE_ID_BANK: {
        BankInfo *bank = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(ref->infoBlock, id);

        return (u8 *)bank + bank->fileOffset;
    }
    default:
        return NULL;
    }
}

} /* extern "C" */
