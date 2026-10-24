#include "common.h"

extern "C" {
void *btlGetMainState(void);
s32 FUN_003eb1cc(void *state);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0039cd58(void)
{
    scrSetResult(FUN_003eb1cc(btlGetMainState()) != 0);
    return 1;
}
