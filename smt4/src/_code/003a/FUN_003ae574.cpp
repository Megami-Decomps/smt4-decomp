#include "battle/btlUI.h"

extern "C" {

void FUN_001f4e54(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003ae574(void)
{
    FUN_001f4e54(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
