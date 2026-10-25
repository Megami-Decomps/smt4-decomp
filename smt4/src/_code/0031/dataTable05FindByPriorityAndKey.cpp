#include "gamedata/DataTable.h"
#include "shard/W6_W6Match4_Table05Sub2Entry.h"
#include "shard/dataTable05FindByPriorityAndKey.h"

extern "C" {
s32 FUN_00300b8c(const Table05Sub2Entry *left, const Table05Sub2Entry *right);
Table05Sub2Entry *libc_bsearch(const Table05Sub2Entry *key, const Table05Sub2Entry *base,
                             u32 count, u32 size,
                             s32 (*compare)(const Table05Sub2Entry *, const Table05Sub2Entry *));

// Find table-five section-two entry by its pair of byte keys.
Table05Sub2Entry *dataTable05FindByPriorityAndKey(u8 first, u8 second)
{
    void *section = dataTableGet(5, 2);
    Table05Sub2Entry *entries = (Table05Sub2Entry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    Table05Sub2Entry key;
    key.first = first;
    key.second = second;
    return libc_bsearch(&key, entries, count, sizeof(key), FUN_00300b8c);
}
}
