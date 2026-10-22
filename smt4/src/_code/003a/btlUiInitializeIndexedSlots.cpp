#include "battle/btlUI.h"

extern "C" {

void indexedSlotInit(BtlUiObjC *obj);

extern BtlUiGlobals g_btlUi;

void btlUiInitializeIndexedSlots(void)
{
    if (g_btlUi.ui != NULL) {
        indexedSlotInit(&g_btlUi.ui->objC);
    }
}

} /* extern "C" */
