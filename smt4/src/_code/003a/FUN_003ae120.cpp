#include "battle/btlUI.h"

extern "C" {

void FUN_001e0de0(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae120(BtlUi *arg0, s8 arg1, s8 arg2)
{
    FUN_001e0de0(&g_btlUi.ui->objA);
}

} /* extern "C" */
