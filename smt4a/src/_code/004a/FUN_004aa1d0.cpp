#include "battle/btlUI.h"

extern "C" {

void menu32InitBlock96C(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa1d0(void)
{
    menu32InitBlock96C(&g_btlUi.ui->objC);
}

} /* extern "C" */
