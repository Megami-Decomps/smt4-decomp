#include "common.h"

extern "C" {
extern void *g_btlUiBlock;
void btlUiPlaySceneFadeOutWhenReady(void *block);
}

extern "C" s32 FUN_00324120(void)
{
    btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
    return 1;
}
