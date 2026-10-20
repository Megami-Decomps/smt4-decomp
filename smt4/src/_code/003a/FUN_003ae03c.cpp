#include "battle/btlUI.h"

extern "C" {

void FUN_002af5c0(BtlUiObjD *obj, s32 a, s32 b);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae03c(void)
{
    BtlUi *ui = DAT_00439c88.ui;

    ui->unk7E4B = 1;
    FUN_002af5c0(&ui->objD, 0xD, 0);
}

} /* extern "C" */
