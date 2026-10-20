#include "battle/btlUI.h"

extern "C" {

s32 FUN_0038e6bc(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

bool FUN_004abb30(void)
{
    return FUN_0038e6bc(&g_btlUi.ui->objA) != 0;
}

} /* extern "C" */
