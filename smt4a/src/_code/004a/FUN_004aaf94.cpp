#include "battle/btlUI.h"

extern "C" {

s32 menu32ModeIsNot4(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

s32 FUN_004aaf94(void)
{
    BtlUiA *ui = g_btlUi.ui;
    s32 result = menu32ModeIsNot4(&ui->objA);

    if (result != 0) {
        ui->state = 0;
    }
    return result;
}

} /* extern "C" */
