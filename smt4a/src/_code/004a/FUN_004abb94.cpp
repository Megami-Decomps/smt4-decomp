#include "battle/btlUI.h"

extern "C" {

void FUN_0038e720(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abb94(void)
{
    FUN_0038e720(&g_btlUi.ui->objA);
}

} /* extern "C" */
