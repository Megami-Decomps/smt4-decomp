#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {
s32 FUN_003eb1cc(void *state);
void scrSetResult(s32 result);
}

extern "C" s32 FUN_0039cd58(void)
{
    scrSetResult(FUN_003eb1cc(static_cast<void *>(btlGetMainState())) != 0);
    return 1;
}
