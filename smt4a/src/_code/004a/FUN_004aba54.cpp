#include "battle/btlUI.h"

extern "C" {

void FUN_0038e3f4(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004aba54(void)
{
    FUN_0038e3f4(&g_btlUi.ui->objC);
}

} /* extern "C" */
