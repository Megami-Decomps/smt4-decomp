#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 slotTableEntryIsActive(SlotRecordA *entry);

/* Return the first free entry when there is room in the ordered party slots. */
s32 partyFindFirstUnusedEntry(void)
{
    SaveSlotTableA *table = gameGetSlotTable();
    SaveSlotTableA *ordered = gameGetSlotTable();
    s32 used = 0;
    for (s32 index = 0; index < 24; ++index) {
        if (ordered->party[index] < 0)
            break;
        ++used;
    }
    s32 capacity = table->count;
    if (used >= capacity)
        return -1;
    SaveSlotTableA *entries = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        if (slotTableEntryIsActive(&entries->entries[index]) == 0)
            return index;
    }
    return -1;
}

} /* extern "C" */
