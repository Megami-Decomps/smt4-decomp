#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {
void btlUiRefreshMenuPanel(BtlUiA *block);
}

extern "C" s32 FUN_003c2248(void)
{
    btlUiRefreshMenuPanel(g_btlUiBlock);
    return 1;
}
