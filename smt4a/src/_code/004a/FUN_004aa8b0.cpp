#include "battle/btlUI.h"

extern "C" {

void FUN_0032134c(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa8b0(void)
{
    FUN_0032134c(&g_btlUi.ui->objC);
}

} /* extern "C" */
