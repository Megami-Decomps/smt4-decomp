#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_003792e8(s32 first, s32 second);
}

extern "C" s32 FUN_003a752c(void)
{
    FUN_003792e8(scrGetArg(0), scrGetArg(1));
    return 1;
}
