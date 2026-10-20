#include "battle/btlUI.h"

extern "C" {

void FUN_00300b48(BtlUiObjA *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003af0b0(void)
{
    FUN_00300b48(&DAT_00439c88.ui->objA);
}

} /* extern "C" */
