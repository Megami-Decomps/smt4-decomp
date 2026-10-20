#include "battle/btlUI.h"

extern "C" {

void FUN_001920bc(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003af1c4(void)
{
    FUN_001920bc(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
