#include "gamedata/SearchTable.h"

extern "C" {

/* The kind of unite menu entry `index` (SearchTable.tbb), or 0xFFFFFFFF when out of range. */
u32 dataTable24Sub0GetRecord(u32 index)
{
    void *table = dataTableGet(0x24, 0);
    SearchTableRecord *entries = searchTableRecords(table);
    u32 count = dataTableGetCount(table);
    u32 value;

    if (index >= count) {
        value = 0xffffffff;
    } else {
        value = entries[index].kind;
    }
    return value;
}

} /* extern "C" */
