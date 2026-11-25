/* NON_MATCHING: the shift/copy address registers differ, and armcc folds the final save-body offset
 * into the record-table offset instead of computing it before the tail call. */
#include "gamedata/SavedRecords.h"

/* Index of the first unused record, or -1 when all 32 are in use. */
static __inline s32 findFreeRecord()
{
    const SavedRecordBody *table = (const SavedRecordBody *)&g_gameDataBlocks.saveBlock->body;
    s32 found = -1;
    for (s32 i = 0; i < 32; ++i) {
        const SavedRecord100 *entry = &table->records[i];
        if (!entry->occupancy.first && !entry->occupancy.second) {
            found = i;
            break;
        }
    }
    return found;
}

/* Inserts a saved record at index zero, dropping the oldest one if the table is full. */
extern "C" void savedRecordInsertAtFront(const SavedRecord100 *record)
{
    s32 freeSlot = findFreeRecord();
    freeSlot = freeSlot == -1 ? 31 : freeSlot;
    if (freeSlot == 0) {
        setSavedRecord(0, record);
        return;
    }

    s32 index = freeSlot - 1;
    for (s32 moved = 0; index >= 0; --index, ++moved) {
        SavedRecord100 *source = getSavedRecord(index);
        setSavedRecord(freeSlot - moved, source);
    }
    setSavedRecord(0, record);
}
