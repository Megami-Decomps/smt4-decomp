#include "common.h"

extern "C" {

typedef struct Entry00192690 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[6];
} Entry00192690;

typedef s32 Compare00192690(const Entry00192690 *a, const Entry00192690 *b);

typedef struct AocSystem00192690 {
    /* 0x000 */ u8 unk000[0x3a0];
    /* 0x3a0 */ s32 hasContent;
} AocSystem00192690;

Entry00192690 *FUN_001a6858(AocSystem00192690 *aoc, u32 id);
void *dataTableGet(s32 table, s32 slot);
Entry00192690 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry00192690 *libc_bsearch(const Entry00192690 *key, const Entry00192690 *base, u32 count, u32 size, Compare00192690 *compare);

/* The id comparator at 0x19e30c (unnamed; retail embeds its address). */
#define ID_COMPARE_00192690 ((Compare00192690 *)0x19e30c)

extern AocSystem00192690 *g_aocSystem; /* 0x570280 */

/* Finds entry `id`: the add-on content's first, else data table 8 by binary search. */
Entry00192690 *contentEntryFindById2(u32 id)
{
    Entry00192690 key;
    Entry00192690 *entry;
    Entry00192690 *entries;
    u32 count;
    void *table;

    key.id = id;
    if (g_aocSystem->hasContent != 0) {
        entry = FUN_001a6858(g_aocSystem, id);
        if (entry != NULL) {
            return entry;
        }
    }
    table = dataTableGet(8, 0);
    if (table == NULL) {
        return NULL;
    }
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    return libc_bsearch(&key, entries, count, sizeof(Entry00192690), ID_COMPARE_00192690);
}

} /* extern "C" */
