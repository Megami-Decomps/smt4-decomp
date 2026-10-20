#include "battle/btlUI.h"

extern "C" {

void FUN_001f5e9c(BtlUiObjB *obj);
void FUN_00218be0(BtlUiObjA *obj);
void FUN_002dc4e4(BtlUiObjC *obj, u32 value);

extern BtlUiGlobals DAT_00439c88;

void FUN_003af0c4(u32 unused, u32 value)
{
    BtlUi *ui = DAT_00439c88.ui;

    FUN_00218be0(&ui->objA);
    FUN_001f5e9c(&ui->objB);
    FUN_002dc4e4(&ui->objC, value);
}

} /* extern "C" */
