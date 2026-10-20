#include "battle/btlUI.h"

extern "C" {

void FUN_00321378(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aaa80(void)
{
    FUN_00321378(&g_btlUi.ui->objA);
}

} /* extern "C" */
