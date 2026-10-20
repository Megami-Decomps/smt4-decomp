/* NON_MATCHING: register allocation differs (retail: ref r6, out r4, size r5). */
/* Looks up the group of the archive reference's key: stores its file id and the file's size (-1 if the file is external) in `out`. Returns 0 if there is no group or file. */
#include "nw/snd/SoundArchiveQuery.h"
#include "shard/SoundArchiveFileInfo.h"

extern "C" {

struct GroupFileOut {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ s32 size;
};

struct InternalFileInfo {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 size;
};

u32 *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetGroupInfo(void *infoBlock);
FileInfo *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(void *infoBlock, u32 fileId);
s32 nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(FileInfo *info);
InternalFileInfo *nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(FileInfo *info);
void *nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(FileInfo *info);

s32 FUN_003e6ff0(SoundArchiveRef *ref, u32 unused, GroupFileOut *out)
{
    u32 *group = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetGroupInfo(ref->infoBlock);
    FileInfo *file;
    u32 fileId;
    s32 size = -1;

    if (group == NULL) {
        return 0;
    }
    fileId = *group;
    out->fileId = fileId;
    file = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(ref->infoBlock, fileId);
    if (file == NULL) {
        return 0;
    }
    switch (nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(file)) {
    case 0:
        size = nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(file)->size;
        break;
    case 1:
        nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(file);
        break;
    case 2:
        return 0;
    }
    out->size = size;
    return 1;
}

}
