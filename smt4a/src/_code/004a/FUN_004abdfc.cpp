#include "battle/btlUI.h"

extern "C" {

void menu32QueueAction(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004abdfc(void)
{
    menu32QueueAction(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
