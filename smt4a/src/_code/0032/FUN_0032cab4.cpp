/* NON_MATCHING: success/error block placement and owner/result register assignment differ. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "util/pathBuildWide.h"

extern "C" {
s32 FUN_001883b0(RomOpenFile *file, const u8 *path, u32 mode);

// Normalize a path, initialize the supported file mode and report the resulting status.
s32 FUN_0032cab4(RomFileOpenState *state, const void *path, s32 mode)
{
    s32 result = static_cast<s32>(0xe7e3ffffu);
    u8 normalized[496];
    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 2)) {
        s32 error = static_cast<s32>(0xe0e046bcu);
        FUN_0013ebd8(error);
        return error;
    }
    if (mode == 1) {
        romOpenFileInitialize(&state->file);
        result = FUN_001883b0(&state->file, normalized, 2);
    }
    FUN_0013ebd8(result);
    return result;
}
}
