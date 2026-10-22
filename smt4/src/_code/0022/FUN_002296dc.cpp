#include "battle/btlUI.h"

extern "C" {

void battleUiClearColumnValues(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_002296dc(void)
{
    battleUiClearColumnValues(&g_btlUi.ui->objC);
}

} /* extern "C" */
