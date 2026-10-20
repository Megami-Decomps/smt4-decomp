#include "battle/btlUI.h"

extern "C" {

void FUN_00300904(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af054(void)
{
    FUN_00300904(&g_btlUi.ui->objC);
}

} /* extern "C" */
