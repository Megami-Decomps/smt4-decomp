#include "battle/btlUI.h"

extern "C" {

void FUN_00225238(BtlUiObjA *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003aea90(void)
{
    FUN_00225238(&DAT_00439c88.ui->objA);
}

} /* extern "C" */
