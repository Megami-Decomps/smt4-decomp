/* NON_MATCHING: 11-arg IPC call and LowPath layout recovered; remaining: r6/r8 swap (fixed under --fpu=softvfp, score 10) and retail stores LowPath with str+stm instead of strd. */
#include "common.h"

extern "C" {

/* nn::fs::LowPath: empty path descriptor (type = 1, ptr, size = 1). */
struct LowPath {
    u32 type;
    const void *ptr;
    u32 size;
};

struct FileSystemRoot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 archiveId;
};

extern FileSystemRoot g_titleContentFileSystem;
u32 FUN_00361234(u32 value);
s32 nn_fs_ipc_FileSystem_FormatSaveData(u32 *session, u32 archiveId, u32 pathType, const void *pathPtr,
                                        u32 pathSize, u32 blocks, u32 directories, u32 files,
                                        u32 directoryBuckets, u32 fileBuckets, u32 duplicateData);

/* Formats the save data archive with the given block, file and directory counts (twin in smt4a fsFormatSaveData). */
static void formatArchive(u32 blocks, u32 files, u32 directories, u32 duplicateData)
{
    u32 dirBuckets = FUN_00361234(directories);
    u32 fileBuckets = FUN_00361234(files);
    LowPath path;
    path.type = 1;
    path.ptr = &path.ptr;
    path.size = 1;
    u32 session = g_titleContentFileSystem.archiveId;
    nn_fs_ipc_FileSystem_FormatSaveData(&session, 4, path.type, path.ptr, path.size, blocks,
                                        directories, files, dirBuckets, fileBuckets, duplicateData);
}

/* Formats the save data archive with the given file and directory limits. */
void fsFormatSaveData(u32 files, u32 directories, u32 duplicateData)
{
    formatArchive(0x200, files, directories, duplicateData);
}

} /* extern "C" */
