#include "battle/BtlUiGlobal.h"

extern "C" {

void spriteRowListClose(BtlUiObjA *obj);


void FUN_003ae3cc(void)
{
    BtlUi *ui = g_btlUi.ui;

    ui->panelState.state = 4;
    spriteRowListClose(&ui->objA);
}

} /* extern "C" */
