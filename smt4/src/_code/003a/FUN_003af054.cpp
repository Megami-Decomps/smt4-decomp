#include "battle/btlUI.h"

extern "C" {

void FUN_00300904(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003af054(void)
{
    FUN_00300904(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
