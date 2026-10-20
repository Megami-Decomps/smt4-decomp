#include "battle/btlUI.h"

extern "C" {

void FUN_003b2160(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abe14(void)
{
    FUN_003b2160(&g_btlUi.ui->objC);
}

} /* extern "C" */
