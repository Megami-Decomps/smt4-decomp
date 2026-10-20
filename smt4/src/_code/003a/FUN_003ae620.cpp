#include "battle/btlUI.h"

extern "C" {

void FUN_002e436c(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae620(void)
{
    FUN_002e436c(&g_btlUi.ui->objC);
}

} /* extern "C" */
