#include "battle/btlUI.h"

extern "C" {

void entrySetDefaultLimits(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9a38(void)
{
    entrySetDefaultLimits(&g_btlUi.ui->objC);
}

} /* extern "C" */
