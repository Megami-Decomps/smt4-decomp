#include "battle/btlUI.h"

extern "C" {

s32 FUN_002cccf8(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9c40(u32 unused, u16 *outA, u16 *outB)
{
    BtlUiA *ui = g_btlUi.ui;

    if (FUN_002cccf8(&ui->objC) != 0) {
        *outA = ui->unk74B6;
        *outB = ui->unk74B8;
    }
}

} /* extern "C" */
