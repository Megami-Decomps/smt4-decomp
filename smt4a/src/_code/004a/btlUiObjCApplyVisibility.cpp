#include "battle/BtlUiGlobal.h"

extern "C" {

void FUN_0032134c(BtlUiObjCA *obj);


void btlUiObjCApplyVisibility(void *ui, s32 visible)
{
    FUN_0032134c(&g_btlUi.ui->objC);
}

} /* extern "C" */
