#include "battle/btlUI.h"

extern "C" {

void FUN_00217954(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae820(void)
{
    FUN_00217954(&g_btlUi.ui->objC);
}

} /* extern "C" */
