/* NON_MATCHING: open-result lifetime, resize argument order and constant result materialization differ. */
#include "shard/RomFileOpenState.h"

extern "C" s32 FUN_002bb5a4(RomOpenFile *file, const char *path, u32 mode);
#include "sys/ProcessResult.h"
#include "util/pathBuildWide.h"
extern "C" void asdFatalError();
extern "C" void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(u32 handle);

static __inline u32 fileRecordResult(u32 result)
{
    FUN_002c3510(result);
    return result;
}

// Create a file at the requested length, closing it if setting the length fails.
extern "C" s32 FUN_002cbe94(RomFileOpenState *state, const char *path, u32 size)
{
    char resolvedPath[500];
    if (!pathBuildWide(path, reinterpret_cast<s16 *>(resolvedPath), 0))
        return fileRecordResult(0xe0e046bc);
    romOpenFileInitialize(&state->file);
    s32 result = FUN_002bb5a4(&state->file, resolvedPath, 6);
    if ((s32)(result & 0x80000000) < 0)
        return fileRecordResult(result);
    const PositionedResizeVtable *vtable = static_cast<PositionedResizeVtable *>(state->interface.vtable);
    result = vtable->resize(reinterpret_cast<PositionedStream *>(state), (u64)size);
    FUN_002c3510(result);
    if ((s32)(result & 0x80000000) < 0) {
        if ((state->file.unk00 & ~1u) != 0) {
            if (state->file.unk00 & 1)
                asdFatalError();
            nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(state->file.unk00 & ~1u);
            state->file.unk00 = 0;
        }
        return result;
    }
    return fileRecordResult(0);
}
