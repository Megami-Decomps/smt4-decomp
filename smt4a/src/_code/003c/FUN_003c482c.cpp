#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_004aba6c(BtlUiA *block, s16 value);
}

extern "C" s32 FUN_003c482c(void)
{
    FUN_004aba6c(g_btlUiBlock, scrGetArg(0));
    return 1;
}
