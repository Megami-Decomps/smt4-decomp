#include "battle/btlUI.h"

extern "C" {

void workTablesClear(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a92b8(void)
{
    workTablesClear(&g_btlUi.ui->objC);
}

} /* extern "C" */
