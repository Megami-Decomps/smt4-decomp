#include "battle/BtlUiGlobal.h"

extern "C" {


extern void FUN_001f4ddc(BtlUiObjC *obj, s16 arg);

void FUN_003ae2d0(u32 unused, s32 arg)
{
    FUN_001f4ddc(&g_btlUi.ui->objC, arg);
}

} /* extern "C" */
