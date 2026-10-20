#include "battle/btlUI.h"

extern "C" {

void FUN_003bcf80(BtlUiObjBA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aaa94(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 5;
    FUN_003bcf80(&ui->objB);
}

} /* extern "C" */
