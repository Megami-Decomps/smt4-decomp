#include "battle/btlUI.h"

extern "C" {

s32 FUN_0032135c(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

s32 FUN_004aaa4c(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;
    s32 result = FUN_0032135c(&ui->objA);

    if (result != 0) {
        ui->state = 0;
    }
    return result;
}

} /* extern "C" */
