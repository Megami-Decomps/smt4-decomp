#include "gamedata/SearchTable.h"

extern "C" {

/* Returns the name of unite menu entry `index` (SearchTable.tbb), or NULL when the index is out of range. */
char *dataTableGetEntry24Member(u32 index)
{
    void *table;
    SearchTableRecordA *entries;
    u32 count;
    char *member;

    table = dataTableGet(0x24, 0);
    entries = searchTableRecordsA(table);
    count = dataTableGetCount(table);
    if (index >= count) {
        member = NULL;
    } else {
        member = entries[index].name;
    }
    return member;
}

} /* extern "C" */
