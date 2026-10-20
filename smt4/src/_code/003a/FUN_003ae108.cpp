#include "battle/btlUI.h"

extern "C" {

void FUN_001e0db8(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ae108(void)
{
    FUN_001e0db8(&g_btlUi.ui->objC);
}

} /* extern "C" */
