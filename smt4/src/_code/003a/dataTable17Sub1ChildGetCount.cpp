#include "gamedata/PlaceRecordTable.h"
#include "gamedata/DataTable.h"

extern "C" {

/* The number of stock rows of place record `index` of data table 0x17 (section stockSection + 2). */
s32 dataTable17Sub1ChildGetCount(Table17Handle *ignored, s32 index)
{
    void *table = dataTableGet(0x17, 1);
    PlaceRecord *entries = (PlaceRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    PlaceRecord *record;

    if ((u32)index >= count) {
        record = NULL;
    } else {
        record = &entries[index];
    }
    return dataTableGetCount(dataTableGet(0x17, record->stockSection + 2));
}

} /* extern "C" */
