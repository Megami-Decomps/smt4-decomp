#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void playerEquipItemIfAligned(s32 item);
void FUN_003df7c4(s32 value);
}

extern "C" s32 FUN_002a3dc4(void)
{
    playerEquipItemIfAligned(scrGetArg(0));
    FUN_003df7c4(0);
    return 1;
}
