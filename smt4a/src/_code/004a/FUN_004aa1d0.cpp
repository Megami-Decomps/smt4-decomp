#include "battle/btlUI.h"

extern "C" {

void menu32InitBlock96C(BtlUiObjCA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aa1d0(void)
{
    menu32InitBlock96C(&DAT_0057a9b8.ui->objC);
}

} /* extern "C" */
