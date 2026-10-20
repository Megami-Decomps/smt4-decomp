#include "battle/btlUI.h"

extern "C" {

void FUN_001f4e54(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae574(void)
{
    FUN_001f4e54(&g_btlUi.ui->objC);
}

} /* extern "C" */
