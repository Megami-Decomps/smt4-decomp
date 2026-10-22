/* NON_MATCHING: success/error block placement and owner/result register assignment differ. */
#include "shard/RomFileOpenState.h"

extern "C" {
s32 FUN_002e0e04(const void *path, u8 *normalized, u32 encoding);
s32 FUN_001883b0(RomOpenFile *file, const u8 *path, u32 mode);
void FUN_0013ebd8(s32 result);

// Normalize a path, initialize the supported file mode and report the resulting status.
s32 FUN_0032cab4(RomFileOpenState *state, const void *path, s32 mode)
{
    s32 result = static_cast<s32>(0xe7e3ffffu);
    u8 normalized[496];
    if (!FUN_002e0e04(path, normalized, 2)) {
        result = static_cast<s32>(0xe0e046bcu);
        FUN_0013ebd8(result);
        return result;
    }
    if (mode == 1) {
        state->file.unk0c = 0;
        state->file.unk10 = 0;
        state->file.unk04 = 0;
        state->file.unk08 = 0;
        result = FUN_001883b0(&state->file, normalized, 2);
    }
    FUN_0013ebd8(result);
    return result;
}
}
