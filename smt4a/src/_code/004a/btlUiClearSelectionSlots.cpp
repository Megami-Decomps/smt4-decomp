#include "battle/BtlUiGlobal.h"

extern "C" {

void selectionSlotsClear(BtlUiObjAA *obj);


void btlUiClearSelectionSlots(void)
{
    selectionSlotsClear(&g_btlUi.ui->objA);
}

} /* extern "C" */
