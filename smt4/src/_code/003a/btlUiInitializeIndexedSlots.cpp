#include "battle/BtlUiGlobal.h"

extern "C" {

void indexedSlotInit(BtlUiObjC *obj);


void btlUiInitializeIndexedSlots(void)
{
    if (g_btlUi.ui != NULL) {
        indexedSlotInit(&g_btlUi.ui->objC);
    }
}

} /* extern "C" */
