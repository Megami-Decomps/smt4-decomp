#include "battle/btlUI.h"

extern "C" {

void FUN_0020635c(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003ad754(void)
{
    FUN_0020635c(&g_btlUi.ui->objC);
}

} /* extern "C" */
