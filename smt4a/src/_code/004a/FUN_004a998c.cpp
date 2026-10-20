#include "battle/btlUI.h"

extern "C" {

void FUN_00184c00(BtlUiObjDA *obj, s32 a, s32 b);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a998c(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    ui->unk74B3 = 1;
    FUN_00184c00(&ui->objD, 0xD, 0);
}

} /* extern "C" */
