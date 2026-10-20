#include "common.h"

extern "C" {

int dataTableGetCount(u32 table);
extern u16 *dataTableGetEntries(u32 table);
extern u32 dataTableGet(u32 id, u32 index);

/* Entry of data table 9/3 at `a - b + 10`, clamped to the table's range. */
u16 dataTable09Sub3GetRecord(int a, int b)
{
    u32 table = dataTableGet(9, 3);
    u32 index = (a - b) + 10;
    u32 count;
    u16 *entries;

    if ((int)index < 0) {
        index = 0;
    }
    count = dataTableGetCount(table);
    if (count <= index) {
        index = dataTableGetCount(table) - 1;
    }
    entries = dataTableGetEntries(table);
    return entries[index];
}

} /* extern "C" */
