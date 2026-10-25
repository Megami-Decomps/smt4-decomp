#include "common.h"
#include "nn/Result.h"

extern "C" {

/* A result slot: the last failure code is kept at 0x10. */
struct ResultSlots {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 lastResult;
};

extern ResultSlots DAT_004651e8;
u32 FUN_002cbf90(s32 arg);
u32 FUN_00220438(s32 arg);
u32 FUN_002e1458(s32 arg);

/* Runs the check for `kind` (0-2) on `arg`; true when it succeeded. A NULL arg records a failure code. */
u8 FUN_002f530c(s32 kind, s32 arg)
{
    u32 result = 0xE7E3FFFF;

    if (arg == 0) {
        DAT_004651e8.lastResult = 0xC8804464;
        return 0;
    }
    if (kind == 0) {
        result = FUN_002cbf90(arg);
    } else if (kind == 1) {
        result = FUN_00220438(arg);
    } else if (kind == 2) {
        result = FUN_002e1458(arg);
    }
    if (!nnResultIsSuccess(result))
        return 0;
    return 1;
}

} /* extern "C" */
