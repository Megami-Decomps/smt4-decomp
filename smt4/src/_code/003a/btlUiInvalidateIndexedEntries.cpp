#include "battle/btlUI.h"

extern "C" {

void indexedObjectInvalidateEntries(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void btlUiInvalidateIndexedEntries(void)
{
    indexedObjectInvalidateEntries(&g_btlUi.ui->objA);
}

} /* extern "C" */
