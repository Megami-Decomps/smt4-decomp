#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_002cd108(BtlUiObjCA *obj);


void FUN_004a8edc(void)
{
    FUN_002cd108(&g_btlUi.ui->objC);
}

} /* extern "C" */
