#include "battle/btlUI.h"

extern "C" {

void FUN_002fb3c8(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa798(void)
{
    FUN_002fb3c8(&g_btlUi.ui->objC);
}

} /* extern "C" */
