#include "battle/btlUI.h"

extern "C" {

void FUN_002d0098(BtlUiObjC *obj, s32 arg);

extern BtlUiGlobals g_btlUi;

void FUN_003adc20(void)
{
    FUN_002d0098(&g_btlUi.ui->objC, 0);
}

} /* extern "C" */
