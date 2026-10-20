#include "battle/btlUI.h"

extern "C" {

void FUN_00206344(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae608(void)
{
    FUN_00206344(&g_btlUi.ui->objC);
}

} /* extern "C" */
