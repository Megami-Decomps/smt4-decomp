#include "gamedata/PlaceRecordTable.h"
#include "gamedata/DataTable.h"

extern "C" {

/* Place record `index` of data table 0x17 (section 1), or NULL when out of range. */
PlaceRecord *dataTable17Sub1GetRecord(Table17Handle *ignored, s32 index)
{
    void *table = dataTableGet(0x17, 1);
    PlaceRecord *entries = (PlaceRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if ((u32)index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
