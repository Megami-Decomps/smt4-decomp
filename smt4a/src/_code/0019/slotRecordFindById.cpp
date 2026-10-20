#include "common.h"

extern "C" {

/* Record with an id halfword at 0x62. */
typedef struct {
    u8 unk00[0x62];
    u16 id;             /* 0x62 */
} Record;

/* Block with a table of signed record indices at 0x1c88. */
typedef struct {
    u8 unk00[0x1c88];
    s8 slots[1];        /* 0x1c88 */
} SlotBlock;

Record *gameGetSlotRecord(int index);
SlotBlock *gameGetSlotTable(void);
int gameSlotTableFindFree(void);

/* Finds the record with `id` among the block's slots; NULL when none matches. */
Record *slotRecordFindById(u32 id)
{
    int i = 0;

    if (i < gameSlotTableFindFree()) {
        do {
            Record *record = gameGetSlotRecord(gameGetSlotTable()->slots[i]);

            if (record->id == id) {
                return record;
            }
            i++;
        } while (i < gameSlotTableFindFree());
    }
    return NULL;
}

} /* extern "C" */
