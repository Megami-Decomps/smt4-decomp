#include "battle/btlUI.h"
#include "shard/FUN_00229a24.h"

extern "C" {

void FUN_00225168(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void FUN_00229a24(void)
{
    FUN_00225168(&g_btlUi.ui->objC);
}

} /* extern "C" */
