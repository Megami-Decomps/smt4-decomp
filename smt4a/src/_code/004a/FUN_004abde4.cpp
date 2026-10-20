#include "battle/btlUI.h"

extern "C" {

void FUN_003a9ef8(BtlUiObjCA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abde4(void)
{
    FUN_003a9ef8(&g_btlUi.ui->objC);
}

} /* extern "C" */
