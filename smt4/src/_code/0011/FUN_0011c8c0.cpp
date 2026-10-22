/* NON_MATCHING: Owner/one/zero registers r4-r6 are rotated and two argument stores exchange order; all operations and constants match. */
#include "sys/NgWord.h"
#include "nn/Result.h"

extern "C" {
s32 FUN_00127188(u32 mode, const char *file, u64 titleId, u32 option, u32 type, u32 access);
s32 FUN_00127000(const char *archive, u32 mode, u64 titleId, u32 option,
                  u32 type, u32 access, void *buffer, u32 size, u32 offset);
extern const char DAT_0040b770[];

/* Loads the banned-word data only when it fits the fixed two-kilobyte buffer. */
s32 FUN_0011c8c0(NgWordState *state, const char *file)
{
    const u64 titleId = 0x000400db00010302ULL;
    if (FUN_00127188(0, file, titleId, 0, 1, 1) > 0x800) {
        return (s32)0xd820ebec;
    }
    s32 result = FUN_00127000(DAT_0040b770, 0, titleId, 0, 1, 1, state->buffer, 0x800, 0);
    if (nnResultIsSuccess(result)) {
        state->loaded = 1;
        result = 0;
    }
    return result;
}
}
