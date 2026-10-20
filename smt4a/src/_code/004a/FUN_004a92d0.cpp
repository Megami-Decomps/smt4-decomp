#include "battle/btlUI.h"

extern "C" {

void FUN_00231cdc(BtlUiObjCA *obj, u32 a, s32 b, u32 c);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a92d0(u32 unused, u32 first, u32 second)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 0xB;
    FUN_00231cdc(&ui->objC, first, -1, second);
}

} /* extern "C" */
