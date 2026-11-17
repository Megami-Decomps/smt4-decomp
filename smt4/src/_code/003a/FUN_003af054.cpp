#include "battle/BtlUiGlobal.h"

extern "C" {

void btlUiGetSelectedColumnValue(BtlUiObjC *obj);


void FUN_003af054(void)
{
    btlUiGetSelectedColumnValue(&g_btlUi.ui->objC);
}

} /* extern "C" */
