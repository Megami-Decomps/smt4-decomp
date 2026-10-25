#include "battle/btlUI.h"

extern "C" {

void bufferedValueGetFirstReady(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aba54(void)
{
    bufferedValueGetFirstReady(&g_btlUi.ui->objC);
}

} /* extern "C" */
