#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
void FUN_004ab734(BtlUiA *block);
}

extern "C" s32 FUN_003c2248(void)
{
    FUN_004ab734(g_btlUiBlock);
    return 1;
}
