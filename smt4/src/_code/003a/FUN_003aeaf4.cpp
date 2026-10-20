#include "battle/btlUI.h"

extern "C" {

void FUN_002d0280(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003aeaf4(void)
{
    FUN_002d0280(&g_btlUi.ui->objA);
}

} /* extern "C" */
