#include "shard/SoundArchiveFileInfo.h"

extern "C" {

/* Returns the external file info block of an external file info, or 0. */
s32 nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(FileInfo *info)
{
    s32 result;

    if (FileInfo_GetFileLocationType(info) == 1) {
        result = (s32)info + info->offset;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
