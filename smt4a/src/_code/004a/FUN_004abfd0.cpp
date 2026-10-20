#include "battle/btlUI.h"

extern "C" {

void FUN_0034ee5c(BtlUiObjCA *obj, u32 value, s32 flag);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abfd0(u32 unused, u32 value)
{
    FUN_0034ee5c(&g_btlUi.ui->objC, value, 1);
}

} /* extern "C" */
