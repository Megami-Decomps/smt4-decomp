#include "ui/PlaceTextTransition.h"
#include "gamedata/DataTable.h"
#include "quest_center/QuestUnlockConditions.h"

extern "C" {

/* The stock rows of place record `index` of data table 0x17 (section stockSection + 2). */
const QuestUnlockConditions *dataTable17Sub1ChildGetEntries(PlaceTextTableCursor *cursor, s32 index)
{
    void *table = dataTableGet(0x17, 1);
    const PlaceTextRecord *entries = (const PlaceTextRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    const PlaceTextRecord *record;

    if ((u32)index >= count) {
        record = NULL;
    } else {
        record = &entries[index];
    }
    return (const QuestUnlockConditions *)dataTableGetEntries(dataTableGet(0x17, record->stockSection + 2));
}

} /* extern "C" */
