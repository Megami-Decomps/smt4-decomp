#include "battle/btlUI.h"

extern "C" {

void FUN_003009fc(BtlUiObjC *obj);

extern BtlUiGlobals DAT_00439c88;

void FUN_003af06c(void)
{
    FUN_003009fc(&DAT_00439c88.ui->objC);
}

} /* extern "C" */
