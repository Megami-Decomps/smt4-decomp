#include "battle/btlUI.h"

extern "C" {

void FUN_00225238(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003aea90(void)
{
    FUN_00225238(&g_btlUi.ui->objA);
}

} /* extern "C" */
