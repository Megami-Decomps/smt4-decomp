#include "battle/btlUI.h"

extern "C" {

void objStartTimerIfIdle(BtlUiObjB *obj);
void FUN_00218be0(BtlUiObjA *obj);
void FUN_002dc4e4(BtlUiObjC *obj, u32 value);

extern BtlUiGlobals g_btlUi;

void FUN_003af0c4(u32 unused, u32 value)
{
    BtlUi *ui = g_btlUi.ui;

    FUN_00218be0(&ui->objA);
    objStartTimerIfIdle(&ui->objB);
    FUN_002dc4e4(&ui->objC, value);
}

} /* extern "C" */
