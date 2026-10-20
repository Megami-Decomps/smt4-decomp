#include "battle/btlUI.h"

extern "C" {

void menu32QueueAction(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abdfc(void)
{
    menu32QueueAction(&g_btlUi.ui->objC);
}

} /* extern "C" */
