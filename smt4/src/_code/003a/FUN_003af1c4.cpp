#include "battle/btlUI.h"

extern "C" {

void FUN_001920bc(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af1c4(void)
{
    FUN_001920bc(&g_btlUi.ui->objC);
}

} /* extern "C" */
