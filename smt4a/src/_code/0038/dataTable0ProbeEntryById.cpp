#include "gamedata/DataTable.h"

extern "C" {

typedef int (*SearchCompare)(const void *key, const void *entry);

typedef struct SearchKey {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xB2];
} SearchKey; /* 0xB4 bytes, the size of a table entry */

extern void *libc_bsearch(const void *key, const void *base, u32 count, u32 size, SearchCompare compare);
int FUN_0018449c(const void *key, const void *entry);

/* Looks up table entry `id` in data table 0 by binary search (result unused). */
void dataTable0ProbeEntryById(u16 id)
{
    SearchKey key;
    void *table;
    void *entries;

    key.id = id;
    table = dataTableGet(0, 0);
    entries = dataTableGetEntries(table);
    libc_bsearch(&key, entries, dataTableGetCount(table), 0xB4, FUN_0018449c);
}

} /* extern "C" */
