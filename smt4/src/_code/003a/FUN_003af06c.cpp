#include "battle/btlUI.h"

extern "C" {

void FUN_003009fc(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af06c(void)
{
    FUN_003009fc(&g_btlUi.ui->objC);
}

} /* extern "C" */
