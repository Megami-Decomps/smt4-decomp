#include "battle/btlUI.h"

extern "C" {

void FUN_00231cdc(BtlUiObjCA *obj, u32 a, s32 b, u32 c);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a92d0(u32 unused, u32 first, u32 second)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    ui->state = 0xB;
    FUN_00231cdc(&ui->objC, first, -1, second);
}

} /* extern "C" */
