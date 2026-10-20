#include "battle/btlUI.h"

extern "C" {

void FUN_003bcf20(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aba3c(void)
{
    FUN_003bcf20(&g_btlUi.ui->objC);
}

} /* extern "C" */
