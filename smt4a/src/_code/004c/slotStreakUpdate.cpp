#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

s32 bitsAt60Test(SlotRecordA *record, u32 bit);

/* For every used slot, counts up the record's streak while its bit 10 is set and resets it otherwise. */
void slotStreakUpdate(void)
{
    SaveSlotTableA *table = gameGetSlotTable();
    s32 i;

    for (i = 0; i < table->count; i++) {
        if (table->party[i] >= 0) {
            SlotRecordA *record = gameGetSlotRecord(table->party[i]);

            if (bitsAt60Test(record, 10) == 0) {
                record->streak = 0;
            } else {
                record->streak++;
            }
        }
    }
}

} /* extern "C" */
