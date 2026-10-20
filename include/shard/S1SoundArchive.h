/* nw::snd::internal::SoundArchiveFile: looking up the file record of a sound, group or bank id. */
#ifndef SHARD_S1SOUNDARCHIVE_H
#define SHARD_S1SOUNDARCHIVE_H

#include "common.h"

/* Item id kinds: the top byte of an id. */
enum {
    SOUND_ARCHIVE_ID_SOUND = 1,
    SOUND_ARCHIVE_ID_SOUND_GROUP = 2,
    SOUND_ARCHIVE_ID_BANK = 3
};

/* The archive reference held by the sound archive wrapper. */
typedef struct SoundArchiveFileRef {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ void *infoBlock; /* SoundArchiveFile::InfoBlockBody */
} SoundArchiveFileRef;

typedef struct SoundArchiveFileWrapper {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ SoundArchiveFileRef *ref;
} SoundArchiveFileWrapper;

/* A relative pointer record: the target is `offset` bytes from the record itself. */
typedef struct SoundArchiveFileRecord {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 offset;
} SoundArchiveFileRecord;

typedef struct SoundGroupInfo {
    /* 0x00 */ u32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u16 fileKind;     /* 0x2205: file record follows */
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ s32 fileOffset;   /* relative to this group info */
} SoundGroupInfo;

typedef struct BankInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 fileOffset;   /* relative to this bank info */
} BankInfo;

#endif
