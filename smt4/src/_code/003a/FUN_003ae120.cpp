#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_001e0de0(BtlUiObjA *obj);


void FUN_003ae120(BtlUi *arg0, s8 arg1, s8 arg2)
{
    FUN_001e0de0(&g_btlUi.ui->objA);
}

} /* extern "C" */
