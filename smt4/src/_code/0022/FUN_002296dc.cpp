#include "battle/BtlUiGlobal.h"

extern "C" {

void battleUiClearPositionActiveFlags(BtlUiObjC *obj);


void FUN_002296dc(void)
{
    battleUiClearPositionActiveFlags(&g_btlUi.ui->objC);
}

} /* extern "C" */
