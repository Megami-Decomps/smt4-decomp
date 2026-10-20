#include "battle/btlUI.h"

extern "C" {

void FUN_00321298(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a92b8(void)
{
    FUN_00321298(&g_btlUi.ui->objC);
}

} /* extern "C" */
