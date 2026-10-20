#include "battle/btlUI.h"

extern "C" {

void FUN_00300b48(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af0b0(void)
{
    FUN_00300b48(&g_btlUi.ui->objA);
}

} /* extern "C" */
