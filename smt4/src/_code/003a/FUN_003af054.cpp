#include "battle/btlUI.h"

extern "C" {

void btlUiGetSelectedColumnValue(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af054(void)
{
    btlUiGetSelectedColumnValue(&g_btlUi.ui->objC);
}

} /* extern "C" */
