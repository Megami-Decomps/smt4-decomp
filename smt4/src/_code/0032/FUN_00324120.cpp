#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
void btlUiPlaySceneFadeOutWhenReady(BtlUi *block);
}

extern "C" s32 FUN_00324120(void)
{
    btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
    return 1;
}
