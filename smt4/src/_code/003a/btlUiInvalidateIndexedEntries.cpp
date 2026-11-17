#include "battle/BtlUiGlobal.h"
#include "battle/BattleHelpers_Smt4.h"

extern "C" {

void indexedObjectInvalidateEntries(BtlUiObjA *obj);


void btlUiInvalidateIndexedEntries(void)
{
    indexedObjectInvalidateEntries(&g_btlUi.ui->objA);
}

} /* extern "C" */
