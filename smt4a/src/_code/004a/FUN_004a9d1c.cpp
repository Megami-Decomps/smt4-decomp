#include "battle/btlUI.h"

extern "C" {

void FUN_002fb4b8(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a9d1c(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 8;
    FUN_002fb4b8(&ui->objA);
}

} /* extern "C" */
