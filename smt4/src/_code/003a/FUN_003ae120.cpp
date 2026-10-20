#include "battle/btlUI.h"

extern "C" {

void FUN_001e0de0(BtlUiObjA *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae120(void)
{
    FUN_001e0de0(&DAT_00439c88.ui->objA);
}

} /* extern "C" */
