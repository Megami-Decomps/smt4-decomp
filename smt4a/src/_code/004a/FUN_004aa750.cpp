#include "battle/btlUI.h"

extern "C" {

void FUN_002f934c(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa750(void)
{
    FUN_002f934c(&g_btlUi.ui->objC);
}

} /* extern "C" */
