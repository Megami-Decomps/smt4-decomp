#include "battle/btlUI.h"

extern "C" {

void indexedObjectInvalidateEntries(BtlUiObjA *obj);

extern BtlUiGlobals g_btlUi;

void FUN_003af0b0(void)
{
    indexedObjectInvalidateEntries(&g_btlUi.ui->objA);
}

} /* extern "C" */
