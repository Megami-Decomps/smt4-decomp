#include "shard/RomFileOpenState.h"

extern "C" s32 FUN_001883b0(RomOpenFile *file, const char *path, u32 mode);
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"
extern "C" void sysFatalBreak();
extern "C" void vcallSlot12IfValid(u32 handle);

static __inline nn::Result fileRecordResult(nn::Result result)
{
    FUN_0013ebd8(result);
    return result;
}

static __inline s32 romFileOpen(RomOpenFile *file, const char *path, u32 mode)
{
    romOpenFileInitialize(file);
    return FUN_001883b0(file, path, mode);
}

// Create a file at the requested length, closing it if setting the length fails.
extern "C" nn::Result FUN_0032c900(RomFileOpenState *state, const char *path, u32 size)
{
    char resolvedPath[500];
    nn::Result result;

    if (!pathBuildWide(path, reinterpret_cast<s16 *>(resolvedPath), 0)) {
        result = 0xe0e046bc;
        FUN_0013ebd8(result);
        return result;
    }
    result = romFileOpen(&state->file, resolvedPath, 6);
    if ((s32)(result & 0x80000000) < 0) {
        FUN_0013ebd8(result);
        return result;
    }
    const PositionedResizeVtable *vtable = static_cast<PositionedResizeVtable *>(state->interface.vtable);
    result = vtable->resize(reinterpret_cast<PositionedStream *>(state), (u64)size);
    FUN_0013ebd8(result);
    if ((s32)(result & 0x80000000) < 0) {
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
