#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 FUN_002f5a10(void);
int bustupCutAnimSetJobParam(void);
int FUN_00249c4c(u32 value, s32 arg1, s32 arg2);
int scrSetResult(u32 value);

/* Script command: sets up the bustup cut animation job and returns FUN_002f5a10's value as the result. */
u32 FUN_002d8848(void)
{
    u32 value;

    scrGetArg(0);
    value = FUN_002f5a10();
    bustupCutAnimSetJobParam();
    FUN_00249c4c(value, 0, 0);
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
