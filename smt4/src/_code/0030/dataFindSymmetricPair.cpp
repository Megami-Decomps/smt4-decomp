#include "gamedata/DataTable.h"
#include "gamedata/Table05Pair.h"
#include "shard/dataFindSymmetricPair.h"

extern "C" {
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));
s32 uiCompareBytePriorityAndKey(const void *left, const void *right);

/* Searches table five for a pair in either input order. */
Table05Pair *dataFindSymmetricPair(u8 first, u8 second)
{
    void *table = dataTableGet(5, 1);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    Table05Pair key;
    key.first = first;
    key.second = second;
    Table05Pair *entry = (Table05Pair *)libc_bsearch(&key, entries, count, sizeof(key), uiCompareBytePriorityAndKey);
    if (entry == NULL) {
        key.first = second;
        key.second = first;
        entry = (Table05Pair *)libc_bsearch(&key, entries, count, sizeof(key), uiCompareBytePriorityAndKey);
    }
    return entry;
}
}
