#include "battle/btlUI.h"

extern "C" {

void FUN_00225214(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_00242914(void)
{
    FUN_00225214(&g_btlUi.ui->objC);
}

} /* extern "C" */
