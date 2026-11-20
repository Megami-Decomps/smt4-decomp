#include "shard/RomFileOpenState.h"
#include "sys/ProcessResult.h"
#include "sys/FilePaths.h"
#include "nn/Result.h"

/* Opens `path`, taken from archive root 2, for writing when `access` is 1 (the only access this
 * supports; any other leaves the result unset) and records the result. */
extern "C" nn::Result romFileOpenForWrite(RomFileOpenState *state, const void *path, s32 access)
{
    nn::Result result;
    u8 widePath[496];

    if (!pathBuildWide((const char *)path, (s16 *)widePath, 2)) {
        result = FILE_RESULT_PATH_TOO_LONG;
        processResultSetValue(result);
        return result;
    }
    if (access == 1) {
        result = romOpenFileOpen(&state->file, widePath, ROM_FILE_OPEN_WRITE);
    }
    processResultSetValue(result);
    return result;
}
