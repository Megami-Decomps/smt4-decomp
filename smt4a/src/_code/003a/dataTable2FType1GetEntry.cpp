#include "gamedata/Table2FType1Entry.h"
#include "gamedata/DataTable.h"

extern "C" {

/* Entry `index` of data table 0x2F (type 1), or NULL when out of range. */
Table2FType1Entry *dataTable2FType1GetEntry(u32 index)
{
    void *table = dataTableGet(0x2F, 1);
    Table2FType1Entry *entries = (Table2FType1Entry *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
