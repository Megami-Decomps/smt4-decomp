#include "battle/btlUI.h"
#include "code/Code0024.h"

extern "C" {

void FUN_00225214(BtlUiObjC *obj, u8 value);

extern BtlUiGlobals g_btlUi;

void FUN_00242914(void *block, u8 value)
{
    FUN_00225214(&g_btlUi.ui->objC, value);
}

} /* extern "C" */
