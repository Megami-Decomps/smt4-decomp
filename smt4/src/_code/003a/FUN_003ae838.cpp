#include "battle/btlUI.h"

extern "C" {

void saveIsSelectionOutsideRange(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae838(void)
{
    saveIsSelectionOutsideRange(&g_btlUi.ui->objC);
}

} /* extern "C" */
