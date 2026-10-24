/* NON_MATCHING: only the final sign-bit test differs (retail: and #0x80000000 / cmp / movlt / movge; armcc here emits asr #31 / add #1). */
#include "common.h"

extern "C" {

/* A result slot: the last failure code is kept at 0x10. */
struct ResultSlots {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 lastResult;
};

extern ResultSlots DAT_005b40b4;
u32 FUN_0032c9fc(s32 arg);
u32 FUN_00317e50(s32 arg);
u32 FUN_003596e0(s32 arg);

/* Runs the check for `kind` (0-2) on `arg`; true when it succeeded. A NULL arg records a failure code. */
u8 FUN_0037aaec(s32 kind, s32 arg)
{
    u32 result = 0xE7E3FFFF;

    if (arg == 0) {
        DAT_005b40b4.lastResult = 0xC8804464;
        return 0;
    }
    if (kind == 0) {
        result = FUN_0032c9fc(arg);
    } else if (kind == 1) {
        result = FUN_00317e50(arg);
    } else if (kind == 2) {
        result = FUN_003596e0(arg);
    }
    return (result & 0x80000000) == 0;
}

} /* extern "C" */
