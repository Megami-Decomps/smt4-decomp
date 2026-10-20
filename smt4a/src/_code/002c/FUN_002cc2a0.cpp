#include "common.h"

extern "C" {

void scrSetResult(s32 value);
s32 FUN_00184964(s32 a, s32 b);
s32 scrGetArg(u32 index);

/* Script command: result = arg0 * (FUN_00184964(arg1 << 10, arg2 << 10) / 100) >> 10; returns 1. */
u32 FUN_002cc2a0(void)
{
    s32 arg0;
    s32 arg1;
    s32 arg2;
    s32 ratio;

    arg0 = scrGetArg(0);
    arg1 = scrGetArg(1);
    arg2 = scrGetArg(2);
    ratio = FUN_00184964(arg1 << 10, arg2 << 10);
    ratio = ratio / 100;
    scrSetResult(arg0 * ratio >> 10);
    return 1;
}

} /* extern "C" */
