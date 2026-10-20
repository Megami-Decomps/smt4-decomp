#include "battle/btlUI.h"

extern "C" {

void FUN_003bcf80(BtlUiObjBA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004aaa94(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    ui->state = 5;
    FUN_003bcf80(&ui->objB);
}

} /* extern "C" */
