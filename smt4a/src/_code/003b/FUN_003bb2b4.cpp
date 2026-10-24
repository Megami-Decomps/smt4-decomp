#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 FUN_0033bf40(s32 value);
}

extern "C" s32 FUN_003bb2b4(void)
{
    return FUN_0033bf40(scrGetArg(0)) != 0;
}
