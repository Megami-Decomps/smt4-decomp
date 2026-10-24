#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_0026fa30(s32 value);
}

extern "C" s32 FUN_002ef2c8(void)
{
    FUN_0026fa30(scrGetArg(0));
    return 1;
}
