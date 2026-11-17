#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 btlUiIsSpriteInactive(BtlUi *block);
s32 FUN_003ae03c(BtlUi *block);
s32 FUN_003ae2b0(BtlUi *block);
s32 FUN_003ae3f0(BtlUi *block);

// Script command: show (nonzero argument) or hide the battle UI block; 1 when it ends up shown / hidden as requested.
u32 FUN_002f1210(void)
{
    u32 result;
    if (scrGetArg(0) != 0) {
        if (btlUiIsSpriteInactive(g_btlUiBlock) != 0) {
            FUN_003ae03c(g_btlUiBlock);
        }
        result = FUN_003ae3f0(g_btlUiBlock) != 0;
    } else {
        if (FUN_003ae3f0(g_btlUiBlock) != 0) {
            FUN_003ae2b0(g_btlUiBlock);
        }
        result = btlUiIsSpriteInactive(g_btlUiBlock) != 0;
    }
    return result;
}

} /* extern "C" */
