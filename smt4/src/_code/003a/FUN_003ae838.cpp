#include "battle/btlUI.h"
#include "code/Code003a.h"

extern "C" {

void saveIsSelectionOutsideRange(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae838(void)
{
    saveIsSelectionOutsideRange(&g_btlUi.ui->objC);
}

} /* extern "C" */
