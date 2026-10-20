#include "common.h"

extern "C" {

typedef struct FileInfo {
    /* 0x00 */ u16 kind;           /* 0x220C: internal file, 0x220D: external file */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 offset;
} FileInfo;

/* Returns the external file info (at `offset` from the header) when the kind is 0x220D, otherwise 0. */
u8 *nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(FileInfo *info)
{
    u8 *external;
    u32 kind;
    u8 isZero;

    kind = info->kind;
    isZero = kind == 0;
    if (!isZero) {
        kind = kind - 0x220C;
        isZero = kind == 0;
    }
    if ((!isZero) && (kind == 1)) {
        external = (u8 *)info + info->offset;
    } else {
        external = NULL;
    }
    return external;
}

} /* extern "C" */
