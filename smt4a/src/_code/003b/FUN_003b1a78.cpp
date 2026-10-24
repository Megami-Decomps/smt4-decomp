#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_0031f0f4(u16 value, s32 mode);
}

extern "C" s32 FUN_003b1a78(void)
{
    FUN_0031f0f4(scrGetArg(0), 0);
    return 1;
}
