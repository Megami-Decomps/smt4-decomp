/* NON_MATCHING: 17 lines: retail materialises the create call's zero high size word once before fileSystemRequireReady
 * and loads the write mode before the output handle address. A `const u64 fileSize = size;` widened before
 * fileSystemRequireReady gives 2 lines, but it is a single-use temporary (wave 91 review); the open-coded
 * field clears (14 lines) are the shared romOpenFileOpen, as in romFileCreateSized. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "nn/fs/ArchiveCreateFile.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" {
void FUN_00254824(u32 result, ...);
void *fileSystemRequireReady(void);
void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    processResultSetValue(result);
    return result;
}

/* Closes the state's file if it is open. */
static __inline void romFileClose(RomOpenFile *file)
{
    if (file->handle & ~1u) {
        if (file->handle & 1) {
            asdFatalError();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file->handle & ~1u);
        file->handle = 0;
    }
}

/* Creates a file of the requested size, then opens it for writing. */
nn::Result FUN_00220330(RomFileOpenState *state, const void *path, u32 size)
{
    s16 normalized[248];
    nn::Result result;
    if (!pathBuildWide((const char *)path, normalized, 1)) {
        result = FILE_RESULT_PATH_TOO_LONG;
        processResultSetValue(result);
        return result;
    }
    fileSystemRequireReady();
    result = archivePathDeviceCreateFile((const u16 *)normalized, size);
    processResultSetValue(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        return result;
    }
    s32 openCode = romOpenFileOpen(&state->file, normalized, ROM_FILE_OPEN_WRITE);
    processResultSetValue(openCode);
    failed = openCode & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(openCode, failed);
        romFileClose(&state->file);
        return openCode;
    }
    return fileRecordResult(0);
}
} /* extern "C" */
