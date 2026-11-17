#include "gamedata/SearchTable.h"

extern "C" {

/* The name of unite menu entry `index` (SearchTable.tbb), or NULL when out of range. */
char *dataTable24Sub0GetRecordS90(u32 index)
{
    void *table = dataTableGet(0x24, 0);
    SearchTableRecord *entries = searchTableRecords(table);
    u32 count = dataTableGetCount(table);
    char *name;

    if (index >= count) {
        name = NULL;
    } else {
        name = entries[index].name;
    }
    return name;
}

} /* extern "C" */
