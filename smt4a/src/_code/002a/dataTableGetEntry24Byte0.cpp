#include "gamedata/SearchTable.h"

extern "C" {

/* Returns the option of unite menu entry `index` (SearchTable.tbb), or -1 when the index is out of range. */
u32 dataTableGetEntry24Byte0(u32 index)
{
    void *table;
    SearchTableRecordA *entries;
    u32 result;

    table = dataTableGet(0x24, 0);
    entries = searchTableRecordsA(table);
    result = dataTableGetCount(table);
    if (index >= result) {
        result = 0xFFFFFFFF;
    } else {
        result = (u32)entries[index].option;
    }
    return result;
}

} /* extern "C" */
