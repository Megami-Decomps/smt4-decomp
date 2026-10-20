#include "battle/btlUI.h"

extern "C" {

void FUN_0020e71c(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ac0bc(void)
{
    FUN_0020e71c(&g_btlUi.ui->objC);
}

} /* extern "C" */
