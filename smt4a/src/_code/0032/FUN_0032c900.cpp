/* NON_MATCHING: open-result lifetime, resize argument order and constant result materialization differ. */
#include "shard/RomFileOpenState.h"
#include "util/pathBuildWide.h"
#include "nn/Result.h"

extern "C" s32 FUN_001883b0(RomOpenFile *file, const char *path, u32 mode);
#include "sys/ProcessResult.h"
extern "C" void sysFatalBreak();
extern "C" void vcallSlot12IfValid(u32 handle);

static __inline u32 fileRecordResult(u32 result)
{
    FUN_0013ebd8(result);
    return result;
}

// Create a file at the requested length, closing it if setting the length fails.
extern "C" s32 FUN_0032c900(RomFileOpenState *state, const char *path, u32 size)
{
    char resolvedPath[500];
    if (!pathBuildWide(path, reinterpret_cast<s16 *>(resolvedPath), 0))
        return fileRecordResult(0xe0e046bc);
    romOpenFileInitialize(&state->file);
    nn::Result result = FUN_001883b0(&state->file, resolvedPath, 6);
    if (nnResultIsFailure(result))
        return fileRecordResult(result);
    const PositionedResizeVtable *vtable = static_cast<PositionedResizeVtable *>(state->interface.vtable);
    result = vtable->resize(reinterpret_cast<PositionedStream *>(state), (u64)size);
    FUN_0013ebd8(result);
    if (nnResultIsFailure(result)) {
        if ((state->file.unk00 & ~1u) != 0) {
            if (state->file.unk00 & 1)
                sysFatalBreak();
            vcallSlot12IfValid(state->file.unk00 & ~1u);
            state->file.unk00 = 0;
        }
        return result;
    }
    return fileRecordResult(0);
}
