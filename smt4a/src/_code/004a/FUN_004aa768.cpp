#include "battle/btlUI.h"

extern "C" {

void FUN_002fa73c(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa768(void)
{
    FUN_002fa73c(&g_btlUi.ui->objC);
}

} /* extern "C" */
