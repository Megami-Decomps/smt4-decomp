#include "common.h"

extern "C" {

typedef struct Entry0035dd74 {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x1a];
} Entry0035dd74;

typedef s32 Compare0035dd74(const Entry0035dd74 *a, const Entry0035dd74 *b);

typedef struct AocSystem0035dd74 AocSystem0035dd74;

Entry0035dd74 *FUN_004704a4(AocSystem0035dd74 *aoc, u32 id);
void *dataTableGet(s32 table, s32 slot);
Entry0035dd74 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry0035dd74 *libc_bsearch(const Entry0035dd74 *key, const Entry0035dd74 *base, u32 count, u32 size, Compare0035dd74 *compare);

/* The id comparator at 0x2b2d30 (unnamed; retail embeds its address). */
#define ID_COMPARE_0035DD74 ((Compare0035dd74 *)0x2b2d30)

extern AocSystem0035dd74 *g_aocSystem; /* 0x570280 */

/* Finds entry `id`: the add-on content's first, else data table 5's section 4 by binary search. */
Entry0035dd74 *contentEntryFindById(u32 id)
{
    Entry0035dd74 *entry = FUN_004704a4(g_aocSystem, id);

    if (entry == NULL) {
        void *table = dataTableGet(5, 4);
        Entry0035dd74 *entries = dataTableGetEntries(table);
        u32 count = dataTableGetCount(table);
        Entry0035dd74 key;

        key.id = id;
        entry = libc_bsearch(&key, entries, count, sizeof(Entry0035dd74), ID_COMPARE_0035DD74);
    }
    return entry;
}

} /* extern "C" */
