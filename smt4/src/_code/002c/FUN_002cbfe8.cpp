#include "sys/ProcessResult.h"
#include "nn/fs/ArchivePath.h"
#include "shard/RomFileOpenState.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"


static __inline s32 romFileOpen(RomOpenFile *file, const u8 *path, u32 mode)
{
    romOpenFileInitialize(file);
    return archivePathDeviceOpen(&file->unk00, reinterpret_cast<const u16 *>(path), mode);
}

// Normalize a path, open the file when `mode` is 1 (the only supported mode) and report the resulting status.
extern "C" nn::Result FUN_002cbfe8(RomFileOpenState *state, const void *path, s32 mode)
{
    nn::Result result;
    u8 normalized[496];

    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 2)) {
        result = 0xe0e046bc;
        processResultSetValue(result);
        return result;
    }
    if (mode == 1) {
        result = romFileOpen(&state->file, normalized, 2);
    }
    processResultSetValue(result);
    return result;
}
