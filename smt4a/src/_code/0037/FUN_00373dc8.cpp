#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 FUN_004aa2bc(BtlUiA *block);
s32 FUN_004a998c(BtlUiA *block);
s32 FUN_004a9c04(BtlUiA *block);
s32 FUN_004a9d40(BtlUiA *block);

// Script command: show (nonzero argument) or hide the battle UI block; 1 when it ends up shown / hidden as requested.
u32 FUN_00373dc8(void)
{
    u32 result;
    if (scrGetArg(0) != 0) {
        if (FUN_004aa2bc(g_btlUiBlock) != 0) {
            FUN_004a998c(g_btlUiBlock);
        }
        result = FUN_004a9d40(g_btlUiBlock) != 0;
    } else {
        if (FUN_004a9d40(g_btlUiBlock) != 0) {
            FUN_004a9c04(g_btlUiBlock);
        }
        result = FUN_004aa2bc(g_btlUiBlock) != 0;
    }
    return result;
}

} /* extern "C" */
