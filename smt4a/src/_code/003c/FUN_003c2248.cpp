#include "common.h"

extern "C" {
extern void *g_btlUiBlock;
void FUN_004ab734(void *block);
}

extern "C" s32 FUN_003c2248(void)
{
    FUN_004ab734(g_btlUiBlock);
    return 1;
}
