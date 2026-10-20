#include "battle/btlUI.h"

extern "C" {

extern BtlUiGlobals g_btlUi;

extern void FUN_001f4ddc(BtlUiObjC *obj, s16 arg);

void FUN_003ae2d0(u32 unused, s32 arg)
{
    FUN_001f4ddc(&g_btlUi.ui->objC, arg);
}

} /* extern "C" */
