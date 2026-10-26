/* NON_MATCHING: mode branches merge after the second arm rather than placing it after the error return. */
#include "shard/RomFileOpenState.h"
#include "util/pathBuildWide.h"

extern "C" s32 FUN_001883b0(RomOpenFile *file, const char *path, u32 mode);
#include "sys/ProcessResult.h"

static __inline s32 romFileOpen(RomOpenFile *file, const char *path, u32 mode)
{
    romOpenFileInitialize(file);
    return FUN_001883b0(file, path, mode);
}

// Resolve the path and initialize the ROM file in read or write mode.
extern "C" s32 FUN_002e09b4(RomFileOpenState *state, const char *path, s32 mode)
{
    char resolvedPath[500];
    s32 result;
    if (pathBuildWide(path, reinterpret_cast<s16 *>(resolvedPath), 0)) {
        if (mode != 1) {
            result = romFileOpen(&state->file, resolvedPath, 1);
        } else {
            result = romFileOpen(&state->file, resolvedPath, 2);
        }
        FUN_0013ebd8(result);
        return result;
    }
    result = (s32)0xe0e046bc;
    FUN_0013ebd8(result);
    return result;
}
