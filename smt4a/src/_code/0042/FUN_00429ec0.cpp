/* NON_MATCHING: frame size and the hoisted 512 (r7) now match retail (directory/file counts are helper parameters); remaining: retail merges the 12th argument and request.self into one strd and loads the archive id earlier. */
#include "common.h"

extern "C" {

/* The save-data format request: a pointer back to itself and a flag. */
struct FormatRequest {
    FormatRequest *self;
    u32 flag;
};

struct FileSystemRoot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 archiveId;
};

extern FileSystemRoot DAT_00589398;
u32 FUN_0043c32c(u32 value);
s32 nn_fs_ipc_FileSystem_FormatSaveData(u32 *archive, u32 archiveSize, u32 mediaType, FormatRequest *request,
                                        u32 directories, u32 files, u32 blocksA, u32 blocksB, u32 maxDirectories,
                                        u32 maxFiles, u32 duplicateData, u32 flag);

/* Formats the save data archive with the given directory/file counts and block counts. */
static void formatArchive(u32 directories, u32 files, u32 blocksA, u32 blocksB, u32 duplicateData)
{
    FormatRequest request;
    u32 archive[2];
    u32 maxDirectories = FUN_0043c32c(blocksB);
    u32 maxFiles = FUN_0043c32c(blocksA);

    request.self = &request;
    request.flag = 1;
    archive[0] = DAT_00589398.archiveId;
    nn_fs_ipc_FileSystem_FormatSaveData(archive, 4, 1, &request, directories, files, blocksB, blocksA, maxDirectories,
                                        maxFiles, duplicateData, 1);
}

/* Formats the save data archive with the given block counts. */
void FUN_00429ec0(u32 blocksA, u32 blocksB, u32 duplicateData)
{
    formatArchive(1, 0x200, blocksA, blocksB, duplicateData);
}

} /* extern "C" */
