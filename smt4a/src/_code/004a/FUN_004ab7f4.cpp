#include "battle/btlUI.h"

extern "C" {

void FUN_003756b8(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004ab7f4(void)
{
    FUN_003756b8(&g_btlUi.ui->objC);
}

} /* extern "C" */
