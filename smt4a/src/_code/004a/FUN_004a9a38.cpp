#include "battle/btlUI.h"

extern "C" {

void FUN_0028fcc8(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9a38(void)
{
    FUN_0028fcc8(&g_btlUi.ui->objC);
}

} /* extern "C" */
