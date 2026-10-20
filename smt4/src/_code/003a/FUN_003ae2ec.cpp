#include "battle/btlUI.h"

extern "C" {

s32 FUN_002062e8(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae2ec(u32 unused, u16 *outA, u16 *outB)
{
    BtlUi *ui = DAT_00439c88.ui;

    if (FUN_002062e8(&ui->objC) != 0) {
        *outA = ui->unk7E4E;
        *outB = ui->unk7E50;
    }
}

} /* extern "C" */
