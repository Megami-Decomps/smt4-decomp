#include "battle/BtlUiGlobal.h"

extern "C" {

void bufferedValueGetFirstReady(BtlUiObjCA *obj);


void FUN_004aba54(void)
{
    bufferedValueGetFirstReady(&g_btlUi.ui->objC);
}

} /* extern "C" */
