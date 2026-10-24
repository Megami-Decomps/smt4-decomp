/* NON_MATCHING: argument layout matches retail but register allocation and stack frame size differ (retail keeps param3/512 in r8/r7 and uses a 48-byte frame; ours 52). */
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

/* Formats the save data archive with the given block counts. */
void FUN_00429ec0(u32 blocksA, u32 blocksB, u32 duplicateData)
{
    FormatRequest request;
    u32 archive[2];
    u32 maxDirectories = FUN_0043c32c(blocksB);
    u32 maxFiles = FUN_0043c32c(blocksA);

    request.self = &request;
    request.flag = 1;
    archive[0] = DAT_00589398.archiveId;
    nn_fs_ipc_FileSystem_FormatSaveData(archive, 4, 1, &request, 1, 0x200, blocksB, blocksA, maxDirectories,
                                        maxFiles, duplicateData, 1);
}

} /* extern "C" */
