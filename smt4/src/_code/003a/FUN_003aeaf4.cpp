#include "battle/btlUI.h"

extern "C" {

void FUN_002d0280(BtlUiObjA *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003aeaf4(void)
{
    FUN_002d0280(&DAT_00439c88.ui->objA);
}

} /* extern "C" */
