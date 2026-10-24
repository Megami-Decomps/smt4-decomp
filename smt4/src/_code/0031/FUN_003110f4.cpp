#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_002f4684(s32 first, s32 second);
}

extern "C" s32 FUN_003110f4(void)
{
    FUN_002f4684(scrGetArg(0), scrGetArg(1));
    return 1;
}
