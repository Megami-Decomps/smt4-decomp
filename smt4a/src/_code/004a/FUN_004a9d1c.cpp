#include "battle/btlUI.h"

extern "C" {

void FUN_002fb4b8(BtlUiObjAA *obj);

extern BtlUiGlobalsA DAT_0057a9b8;

void FUN_004a9d1c(void)
{
    BtlUiA *ui = DAT_0057a9b8.ui;

    ui->state = 8;
    FUN_002fb4b8(&ui->objA);
}

} /* extern "C" */
