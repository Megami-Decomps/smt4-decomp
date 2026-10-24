#include "common.h"

extern "C" {

s32 scrGetArg(void);
s32 btlUiIsSpriteInactive(u32 block);
s32 FUN_003ae03c(u32 block);
s32 FUN_003ae2b0(u32 block);
s32 FUN_003ae3f0(u32 block);
extern u32 g_btlUiBlock; /* 0x439ca8 */

// Script command: show (nonzero argument) or hide the battle UI block; 1 when it ends up shown / hidden as requested.
u32 FUN_002f1214(void)
{
    u32 result;
    if (scrGetArg() != 0) {
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
