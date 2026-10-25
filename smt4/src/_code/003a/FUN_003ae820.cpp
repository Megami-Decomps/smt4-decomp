#include "battle/btlUI.h"
#include "battle/btlUnit.h"

extern "C" {

void FUN_00217954(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

s32 FUN_003ae820(BtlUi *arg0)
{
    FUN_00217954(&g_btlUi.ui->objC);
}

} /* extern "C" */
