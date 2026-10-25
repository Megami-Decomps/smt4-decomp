/* NON_MATCHING: mode branches merge after the second arm rather than placing it after the error return. */
#include "shard/RomFileOpenState.h"

extern "C" s32 FUN_00254884(const char *path, char *resolvedPath, s32 flags);
extern "C" s32 FUN_002bb5a4(RomOpenFile *file, const char *path, u32 mode);
extern "C" void FUN_002c3510(u32 result);

static __inline s32 romFileOpen(RomOpenFile *file, const char *path, u32 mode)
{
    romOpenFileInitialize(file);
    return FUN_002bb5a4(file, path, mode);
}

// Resolve the path and initialize the ROM file in read or write mode.
extern "C" s32 FUN_0024ab94(RomFileOpenState *state, const char *path, s32 mode)
{
    char resolvedPath[500];
    s32 result;
    if (FUN_00254884(path, resolvedPath, 0)) {
        if (mode != 1) {
            result = romFileOpen(&state->file, resolvedPath, 1);
        } else {
            result = romFileOpen(&state->file, resolvedPath, 2);
        }
        FUN_002c3510(result);
        return result;
    }
    result = (s32)0xe0e046bc;
    FUN_002c3510(result);
    return result;
}
