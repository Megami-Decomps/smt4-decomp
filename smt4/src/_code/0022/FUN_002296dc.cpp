#include "battle/BtlUiGlobal.h"

extern "C" {

void battleUiClearColumnValues(BtlUiObjC *obj);


void FUN_002296dc(void)
{
    battleUiClearColumnValues(&g_btlUi.ui->objC);
}

} /* extern "C" */
