#include "battle/btlUI.h"

extern "C" {

s32 FUN_00336d84(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

s32 FUN_004aaf94(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;
    s32 result = FUN_00336d84(&ui->objA);

    if (result != 0) {
        ui->state = 0;
    }
    return result;
}

} /* extern "C" */
