#include "battle/BtlUiGlobal.h"

extern "C" {

s32 menu32ModeIsNot2(BtlUiObjAA *obj);


s32 FUN_004aaa4c(void)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 result = menu32ModeIsNot2(&ui->objA);

    if (result != 0) {
        ui->state = 0;
    }
    return result;
}

} /* extern "C" */
