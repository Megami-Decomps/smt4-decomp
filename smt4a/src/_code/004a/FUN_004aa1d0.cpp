#include "battle/BtlUiGlobal.h"

extern "C" {

void menu32InitBlock96C(BtlUiObjCA *obj);


void FUN_004aa1d0(void)
{
    menu32InitBlock96C(&g_btlUi.ui->objC);
}

} /* extern "C" */
