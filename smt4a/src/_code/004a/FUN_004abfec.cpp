#include "battle/btlUI.h"

extern "C" {

s32 FUN_00381198(BtlUiObjAA *obj);
s32 FUN_003bcf68(BtlUiObjBA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

bool FUN_004abfec(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    return FUN_00381198(&ui->objA) != 0 && FUN_003bcf68(&ui->objB) != 0;
}

} /* extern "C" */
