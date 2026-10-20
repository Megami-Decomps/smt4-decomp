/* NON_MATCHING: the type tag is compared through a second register (sub r2, r1, #8192) where retail reuses r1. */
#include "common.h"

extern "C" {

#define FILE_INFO_TYPE_INTERNAL 0x220c

typedef struct FileInfo {
    /* 0x00 */ u16 type;           /* reference type tag; 0 = null reference */
    /* 0x02 */ u16 unk02;
    /* 0x04 */ s32 offset;         /* from the start of this structure */
} FileInfo;

/* Returns the internal file info this entry refers to (offset from the entry itself), or NULL if it is not an internal reference. */
u8 *nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(FileInfo *info)
{
    if (info->type != 0 && info->type == FILE_INFO_TYPE_INTERNAL) {
        return (u8 *)info + info->offset;
    }
    return NULL;
}

} /* extern "C" */
