#include "battle/btlUI.h"

extern "C" {

void FUN_002ccd58(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aa098(void)
{
    FUN_002ccd58(&g_btlUi.ui->objC);
}

} /* extern "C" */
