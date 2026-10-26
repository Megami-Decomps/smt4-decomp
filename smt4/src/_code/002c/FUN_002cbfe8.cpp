/* NON_MATCHING: success/error block placement and owner/result register assignment differ. */
#include "sys/ProcessResult.h"
#include "shard/RomFileOpenState.h"
#include "sys/FilePaths.h"

extern "C" {
s32 FUN_002bb5a4(RomOpenFile *file, const u8 *path, u32 mode);

// Normalize a path, initialize the supported file mode and report the resulting status.
s32 FUN_002cbfe8(RomFileOpenState *state, const void *path, s32 mode)
{
    s32 result = static_cast<s32>(0xe7e3ffffu);
    u8 normalized[496];
    if (!pathBuildWide(static_cast<const char *>(path), reinterpret_cast<s16 *>(normalized), 2)) {
        result = static_cast<s32>(0xe0e046bcu);
        FUN_002c3510(result);
        return result;
    }
    if (mode == 1) {
        state->file.unk0c = 0;
        state->file.unk10 = 0;
        state->file.unk04 = 0;
        state->file.unk08 = 0;
        result = FUN_002bb5a4(&state->file, normalized, 2);
    }
    FUN_002c3510(result);
    return result;
}
}
