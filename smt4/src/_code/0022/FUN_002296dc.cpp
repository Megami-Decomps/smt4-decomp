#include "battle/btlUI.h"

extern "C" {

void FUN_003130c4(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_002296dc(void)
{
    FUN_003130c4(&g_btlUi.ui->objC);
}

} /* extern "C" */
