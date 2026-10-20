#include "battle/btlUI.h"

extern "C" {

void FUN_002e436c(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae620(void)
{
    FUN_002e436c(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
