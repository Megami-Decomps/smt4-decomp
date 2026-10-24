#include "battle/btlUI.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

void rt_memcpy_w(void *destination, const void *source, u32 size);

extern BtlUiGlobals g_btlUi;

/* Stores a unit record in the UI slot of the battle unit it names (first four units). */
void FUN_003ae34c(u32 unused, BtlUiUnitRecord *record)
{
    BtlUi *ui = g_btlUi.ui;

    for (s32 i = 0; i < 4; i++) {
        BtlUnitEntry *unit = &((BtlState *)ui->owner)->units[i];

        if (unit != NULL && unit->link != NULL && unit->link->id == record->unitId) {
            rt_memcpy_w(&ui->objC.unitRecords.records[i], record, sizeof(BtlUiUnitRecord));
            return;
        }
    }
}

} /* extern "C" */
