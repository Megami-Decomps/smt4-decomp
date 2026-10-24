#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
s32 FUN_003c8510(s32 value);
void FUN_003bf4f0(s32 value);
}

extern "C" s32 FUN_003c5f90(void)
{
    FUN_003bf4f0(FUN_003c8510(scrGetArg(0)));
    return 1;
}
