/* NON_MATCHING: retail materialises the zero (FUN_002ad80c's high size word, later the cleared file fields) once in r6 before FUN_002ad888, and schedules `mov r0, r5` before each failure branch; the rest matches. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "nn/fs/ArchiveCreateFile.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" {
void FUN_00254824(u32 result, ...);
void *FUN_002ad888(void);
u32 archivePathDeviceOpen(RomOpenFile *file, const u8 *path, u32 mode);
void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

/* Records `result` as the process result and hands it back. */
static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_002c3510(result);
    return result;
}

/* Closes the state's file if it is open. */
static __inline void romFileClose(RomOpenFile *file)
{
    if (file->unk00 & ~1u) {
        if (file->unk00 & 1) {
            asdFatalError();
        }
        nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(file->unk00 & ~1u);
        file->unk00 = 0;
    }
}

// Create a file of the requested size, then open it for writing.
nn::Result FUN_00220330(RomFileOpenState *state, const void *path, u32 size)
{
    u8 normalized[496];
    nn::Result result;
    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 1)) {
        result = 0xe0e046bc;
        FUN_002c3510(result);
        return result;
    }
    FUN_002ad888();
    result = FUN_002ad80c(reinterpret_cast<const u16 *>(normalized), size);
    FUN_002c3510(result);
    u32 failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        return result;
    }
    state->file.unk0c = 0;
    state->file.unk10 = 0;
    state->file.unk04 = 0;
    state->file.unk08 = 0;
    result = archivePathDeviceOpen(&state->file, normalized, 2);
    FUN_002c3510(result);
    failed = result & 0x80000000;
    if ((s32)failed < 0) {
        FUN_00254824(result, failed);
        romFileClose(&state->file);
        return result;
    }
    return fileRecordResult(0);
}
}
