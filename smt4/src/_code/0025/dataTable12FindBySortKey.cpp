#include "gamedata/DataTable.h"
#include "shard/W5_W5Match2_ScalarRecord.h"

struct TableTwelveRecord {
    SortKeyRecord key; // 0x00; sort key at 0x20
    u8 unk22[0x52];
};

extern "C" {
s32 recordCompareSortKey(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

// Find a table-twelve record by its unsigned sort key.
TableTwelveRecord *dataTable12FindBySortKey(u32 id)
{
    void *section = dataTableGet(12, 0);
    void *entries = dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    TableTwelveRecord key;
    key.key.sortKey = id;
    return (TableTwelveRecord *)libc_bsearch(&key, entries, count, sizeof(key), recordCompareSortKey);
}
}
