#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern void FUN_004fcf64(s32 a, s32 b, u32 id, s32 c, s32 d, s32 e, f32 time);
extern void FUN_004fee5c(s32 a, s32 b, u32 id, s32 c);

/* Script command: runs FUN_004fcf64 and FUN_004fee5c for the id in argument 0; returns 1. */
u32 FUN_00320f78(void)
{
    u32 id = scrGetArg(0);

    FUN_004fcf64(0, 1, id, 12, 0, 1, 10.0f);
    FUN_004fee5c(0, 1, id, 1);
    return 1;
}

} /* extern "C" */
