#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_00218be0(BtlUiObjA *obj);


void FUN_003ae3cc(void)
{
    BtlUi *ui = g_btlUi.ui;

    ui->panelState.state = 4;
    FUN_00218be0(&ui->objA);
}

} /* extern "C" */
