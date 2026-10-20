#include "battle/btlUI.h"

extern "C" {

void FUN_001e0db8(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae108(void)
{
    FUN_001e0db8(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
