#include "gamedata/SearchTable.h"

extern "C" {

/* The option of unite menu entry `index` (SearchTable.tbb), or 0xFFFFFFFF when out of range. */
u32 dataTable24Sub0GetRecordS90X(u32 index)
{
    void *table = dataTableGet(0x24, 0);
    SearchTableRecord *entries = searchTableRecords(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        count = 0xffffffff;
    } else {
        count = entries[index].option;
    }
    return count;
}

} /* extern "C" */
