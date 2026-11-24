#include "ui/PlaceTextTransition.h"
#include "gamedata/DataTable.h"

extern "C" {

/* Place record `index` of data table 0x17 (section 1), or NULL when out of range. */
const PlaceTextRecord *dataTable17Type1GetEntry(PlaceTextTableCursor *cursor, s32 index)
{
    void *table = dataTableGet(0x17, 1);
    const PlaceTextRecord *entries = (const PlaceTextRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if ((u32)index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
