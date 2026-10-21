#include "battle/btlUI.h"

extern "C" {

void selectionSlotsClear(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void FUN_004abb94(void)
{
    selectionSlotsClear(&g_btlUi.ui->objA);
}

} /* extern "C" */
