#include "battle/btlUI.h"

extern "C" {

void FUN_00381178(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa7b0(void)
{
    FUN_00381178(&g_btlUi.ui->objC);
}

} /* extern "C" */
