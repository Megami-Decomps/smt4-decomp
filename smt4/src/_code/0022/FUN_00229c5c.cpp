#include "battle/btlUI.h"

extern "C" {

void FUN_00297f1c(BtlUiObjC *obj, u32 a, s32 b, u32 c);

extern BtlUiGlobals DAT_00439c88;

void FUN_00229c5c(u32 unused, u32 first, u32 second)
{
    BtlUi *ui = DAT_00439c88.ui;

    ui->state = 7;
    FUN_00297f1c(&ui->objC, first, -1, second);
}

} /* extern "C" */
