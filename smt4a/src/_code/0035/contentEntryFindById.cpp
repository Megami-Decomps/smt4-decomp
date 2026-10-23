#include "shard/W6_W6Match3_ContentWordList.h"

extern "C" {


typedef s32 Compare0035dd74(const u16 *a, const u16 *b);

typedef struct AocSystem0035dd74 AocSystem0035dd74;

Entry0035dd74 *groupedFileFindKindRecord(AocSystem0035dd74 *aoc, u32 id);
void *dataTableGet(s32 table, s32 slot);
Entry0035dd74 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry0035dd74 *libc_bsearch(const Entry0035dd74 *key, const Entry0035dd74 *base, u32 count, u32 size, Compare0035dd74 *compare);

s32 contentCompareEntryId(const u16 *left, const u16 *right);

extern AocSystem0035dd74 *g_aocSystem; /* 0x570280 */

/* Finds entry `id`: the add-on content's first, else data table 5's section 4 by binary search. */
Entry0035dd74 *contentEntryFindById(u32 id)
{
    Entry0035dd74 *entry = groupedFileFindKindRecord(g_aocSystem, id);

    if (entry == NULL) {
        void *table = dataTableGet(5, 4);
        Entry0035dd74 *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        Entry0035dd74 key;

        key.id = id;
        entry = libc_bsearch(&key, entries, count, sizeof(Entry0035dd74), contentCompareEntryId);
    }
    return entry;
}

} /* extern "C" */
