#include "battle/btlUI.h"

extern "C" {

void menu32InitBlock368(BtlUiObjBA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aaa94(void)
{
    BtlUiA *ui = g_btlUi.ui;

    ui->state = 5;
    menu32InitBlock368(&ui->objB);
}

} /* extern "C" */
