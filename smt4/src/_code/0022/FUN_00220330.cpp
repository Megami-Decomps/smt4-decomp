/* NON_MATCHING: result/sign-test register allocation and zero-value lifetime differ from retail. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "nn/fs/ArchiveCreateFile.h"

extern "C" {
void FUN_00254824(u32 result);
s32 FUN_00254884(const void *path, u8 *normalized, u32 encoding);
void *FUN_002ad888(void);
u32 FUN_002bb5a4(RomOpenFile *file, const u8 *path, u32 mode);
void asdFatalError(void);
void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

// Create a file of the requested size, then open it for writing.
u32 FUN_00220330(RomFileOpenState *state, const void *path, u32 size)
{
    u8 normalized[496];
    if (!FUN_00254884(path, normalized, 1)) {
        u32 result = 0xe0e046bc;
        FUN_002c3510(result);
        return result;
    }
    FUN_002ad888();
    u32 result = FUN_002ad80c(reinterpret_cast<const u16 *>(normalized), size);
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_00254824(result);
        return result;
    }
    state->file.unk0c = 0;
    state->file.unk10 = 0;
    state->file.unk04 = 0;
    state->file.unk08 = 0;
    result = FUN_002bb5a4(&state->file, normalized, 2);
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_00254824(result);
        if (state->file.unk00 & ~1u) {
            if (state->file.unk00 & 1) {
                asdFatalError();
            }
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(state->file.unk00 & ~1u);
            state->file.unk00 = 0;
        }
        return result;
    }
    FUN_002c3510(0);
    return 0;
}
}
