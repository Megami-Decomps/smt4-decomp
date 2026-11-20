#include "battle/BtlUiGlobal.h"

extern "C" {

s32 btlUiWidgetStateIsIdle(BtlUiObjCA *obj);


void FUN_004a9c40(u32 unused, u16 *outA, u16 *outB)
{
    BtlUiA *ui = g_btlUi.ui;

    if (btlUiWidgetStateIsIdle(&ui->objC) != 0) {
        *outA = ui->unk74B6;
        *outB = ui->unk74B8;
    }
}

} /* extern "C" */
