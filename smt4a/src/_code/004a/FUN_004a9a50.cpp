#include "battle/btlUI.h"

extern "C" {

void FUN_0028fce8(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9a50(void)
{
    FUN_0028fce8(&g_btlUi.ui->objA);
}

} /* extern "C" */
