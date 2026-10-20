#include "shard/SoundArchiveFileInfo.h"

extern "C" {

u32 nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(FileInfo *info)
{
    return FileInfo_GetFileLocationType(info);
}

} /* extern "C" */
