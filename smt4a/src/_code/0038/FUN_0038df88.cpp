#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_002a5e7c(u16 value);
}

extern "C" s32 FUN_0038df88(void)
{
    FUN_002a5e7c(scrGetArg(0));
    return 1;
}
