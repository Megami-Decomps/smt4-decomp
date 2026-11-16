#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

extern "C" s32 archivePathDeviceOpen(RomOpenFile *file, const u8 *path, u32 mode);

static __inline s32 romFileOpen(RomOpenFile *file, const u8 *path, u32 mode)
{
    romOpenFileInitialize(file);
    return archivePathDeviceOpen(file, path, mode);
}

// Normalize a path, open the file when `mode` is 1 (the only supported mode) and report the resulting status.
extern "C" nn::Result FUN_0032cab4(RomFileOpenState *state, const void *path, s32 mode)
{
    nn::Result result;
    u8 normalized[496];

    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 2)) {
        result = 0xe0e046bc;
        FUN_0013ebd8(result);
        return result;
    }
    if (mode == 1) {
        result = romFileOpen(&state->file, normalized, 2);
    }
    FUN_0013ebd8(result);
    return result;
}
