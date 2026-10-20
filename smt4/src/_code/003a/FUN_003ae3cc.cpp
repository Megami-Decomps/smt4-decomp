#include "battle/btlUI.h"

extern "C" {

void FUN_00218be0(BtlUiObjA *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae3cc(void)
{
    BtlUi *ui = DAT_00439c88.ui;

    ui->state = 4;
    FUN_00218be0(&ui->objA);
}

} /* extern "C" */
