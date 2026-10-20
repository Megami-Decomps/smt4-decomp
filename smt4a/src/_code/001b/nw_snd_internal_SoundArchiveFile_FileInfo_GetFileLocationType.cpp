#include "common.h"

extern "C" {

typedef struct FileInfo {
    /* 0x00 */ u16 kind;           /* 0x220C: internal file, 0x220D: external file */
} FileInfo;

/* Returns 0 for an internal file (kind 0x220C), 1 for an external file (0x220D) and 2 for anything else. */
u32 nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(FileInfo *info)
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

} /* extern "C" */
