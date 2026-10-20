#include "battle/btlUI.h"

extern "C" {

void FUN_00218460(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae838(void)
{
    FUN_00218460(&g_btlUi.ui->objC);
}

} /* extern "C" */
