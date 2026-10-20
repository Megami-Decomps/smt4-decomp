#include "battle/btlUI.h"

extern "C" {

void FUN_002cd108(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004a8edc(void)
{
    FUN_002cd108(&g_btlUi.ui->objC);
}

} /* extern "C" */
