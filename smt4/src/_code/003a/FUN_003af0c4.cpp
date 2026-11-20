#include "battle/BtlUiGlobal.h"

extern "C" {

void objStartTimerIfIdle(BtlUiObjB *obj);
void spriteRowListClose(BtlUiObjA *obj);
void FUN_002dc4e4(BtlUiObjC *obj, u32 value);


void FUN_003af0c4(u32 unused, u32 value)
{
    BtlUi *ui = g_btlUi.ui;

    spriteRowListClose(&ui->objA);
    objStartTimerIfIdle(&ui->objB);
    FUN_002dc4e4(&ui->objC, value);
}

} /* extern "C" */
