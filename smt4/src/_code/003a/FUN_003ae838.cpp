#include "battle/btlUI.h"
#include "util/FUN_003ae838.h"

extern "C" {

void saveIsSelectionOutsideRange(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae838(void)
{
    saveIsSelectionOutsideRange(&g_btlUi.ui->objC);
}

} /* extern "C" */
