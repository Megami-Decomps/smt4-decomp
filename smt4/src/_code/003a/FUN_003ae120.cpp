#include "battle/BtlUiGlobal.h"

extern "C" {

void spriteRowListChange(BtlUiObjA *obj);


void FUN_003ae120(BtlUi *arg0, s8 arg1, s8 arg2)
{
    spriteRowListChange(&g_btlUi.ui->objA);
}

} /* extern "C" */
