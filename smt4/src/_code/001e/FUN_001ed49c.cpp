#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_00394e08(s32 value);
}

extern "C" s32 FUN_001ed49c(void)
{
    FUN_00394e08(scrGetArg(0));
    return 1;
}
