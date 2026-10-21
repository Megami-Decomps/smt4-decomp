#include "battle/btlUI.h"

extern "C" {

void entrySetDefaultLimits(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void btlUiSetDefaultLimits(void)
{
    entrySetDefaultLimits(&g_btlUi.ui->objC);
}

} /* extern "C" */
