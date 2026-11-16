#include "shard/RomFileOpenState.h"

extern "C" s32 archivePathDeviceOpen(RomOpenFile *file, const char *path, u32 mode);
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

static __inline s32 romFileOpen(RomOpenFile *file, const char *path, u32 mode)
{
    romOpenFileInitialize(file);
    return archivePathDeviceOpen(file, path, mode);
}

// Resolve the path and initialize the ROM file in read or write mode.
extern "C" nn::Result romFileStreamOpen(RomFileOpenState *state, const char *path, s32 mode)
{
    char resolvedPath[500];
    nn::Result result;

    if (!pathBuildWide(path, reinterpret_cast<s16 *>(resolvedPath), 0)) {
        result = 0xe0e046bc;
        processResultSetValue(result);
        return result;
    }
    if (mode == 1) {
        result = romFileOpen(&state->file, resolvedPath, 2);
    } else {
        result = romFileOpen(&state->file, resolvedPath, 1);
    }
    processResultSetValue(result);
    return result;
}
