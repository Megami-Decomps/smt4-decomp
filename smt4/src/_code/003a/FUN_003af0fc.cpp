#include "battle/btlUI.h"

extern "C" {

s32 FUN_0028c5e8(BtlUiObjA *obj);
s32 FUN_0031f524(BtlUiObjB *obj);

extern BtlUiGlobals DAT_00439c88;

bool FUN_003af0fc(void)
{
    BtlUi *ui = DAT_00439c88.ui;

    return FUN_0028c5e8(&ui->objA) != 0 && FUN_0031f524(&ui->objB) != 0;
}

} /* extern "C" */
