#include "common.h"

extern "C" {
extern void *g_btlUiBlock;
s32 scrGetArg(u32 index);
void FUN_004aba6c(void *block, s16 value);
}

extern "C" s32 FUN_003c482c(void)
{
    FUN_004aba6c(g_btlUiBlock, scrGetArg(0));
    return 1;
}
