#include "battle/btlUI.h"

extern "C" {

void FUN_002c5de8(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae850(void)
{
    FUN_002c5de8(&g_btlUi.ui->objC);
}

} /* extern "C" */
