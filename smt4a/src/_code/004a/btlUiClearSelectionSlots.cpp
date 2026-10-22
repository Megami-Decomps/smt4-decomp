#include "battle/btlUI.h"

extern "C" {

void selectionSlotsClear(BtlUiObjAA *obj);

extern BtlUiGlobalsA g_btlUi;

void btlUiClearSelectionSlots(void)
{
    selectionSlotsClear(&g_btlUi.ui->objA);
}

} /* extern "C" */
