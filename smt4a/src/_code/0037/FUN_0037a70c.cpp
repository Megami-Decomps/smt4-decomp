#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_00239b10(s16 value);
}

extern "C" s32 FUN_0037a70c(void)
{
    FUN_00239b10(scrGetArg(0));
    return 1;
}
