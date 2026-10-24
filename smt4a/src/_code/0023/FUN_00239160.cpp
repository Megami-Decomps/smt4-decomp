#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_003d2158(s32 value, s32 mode);
}

extern "C" s32 FUN_00239160(void)
{
    FUN_003d2158(scrGetArg(0), 0);
    return 1;
}
