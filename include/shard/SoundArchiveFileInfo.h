/* nw::snd::internal::SoundArchiveFile::FileInfo: a tagged record locating a sound archive's file. */
#ifndef SHARD_SOUNDARCHIVEFILEINFO_H
#define SHARD_SOUNDARCHIVEFILEINFO_H

#include "common.h"

typedef struct FileInfo {
    /* 0x0 */ u16 kind;        /* 0x220C: internal file info, 0x220D: external file info */
    /* 0x2 */ u8 unk2[2];
    /* 0x4 */ s32 offset;      /* relative to this record */
} FileInfo;

/* 0 for an internal file, 1 for an external one, 2 for anything else. */
static __inline u32 FileInfo_GetFileLocationType(FileInfo *info)
{
    u32 type;

    if (info->kind != 0) {
        type = info->kind - 0x220C;
        if (type == 0 || type == 1) {
            return type;
        }
    }
    return 2;
}

#endif
