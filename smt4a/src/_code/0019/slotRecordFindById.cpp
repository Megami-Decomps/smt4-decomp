#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

int gameSlotTableFindFree(void);

/* Finds the record with `id` among the block's slots; NULL when none matches. */
SlotRecordA *slotRecordFindById(u32 id)
{
    int i = 0;

    if (i < gameSlotTableFindFree()) {
        do {
            SlotRecordA *record = gameGetSlotRecord(gameGetSlotTable()->party[i]);

            if (record->id == id) {
                return record;
            }
            i++;
        } while (i < gameSlotTableFindFree());
    }
    return NULL;
}

} /* extern "C" */
