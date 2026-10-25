#include "common.h"

extern "C" {

typedef struct ContentEntry00308cd4 {
    /* 0x00 */ u8 data[0x1c];
} ContentEntry00308cd4;

typedef struct AocSystem00308cd4 {
    /* 0x000 */ u8 unk000[0x404];
    /* 0x404 */ s32 extraCount;
    /* 0x408 */ ContentEntry00308cd4 *extraEntries;
} AocSystem00308cd4;

void *dataTableGet(s32 table, s32 slot);
ContentEntry00308cd4 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

extern AocSystem00308cd4 *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x23's section 4, continuing into the add-on content's extra entries (NULL past the end). */
ContentEntry00308cd4 *contentEntryGet(u32 index)
{
    void *table = dataTableGet(0x23, 4);
    ContentEntry00308cd4 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    AocSystem00308cd4 *aoc = g_aocSystem;
    s32 extra = aoc->extraCount;
    ContentEntry00308cd4 *extraEntries = aoc->extraEntries;
    return index < extra + count ? &extraEntries[index - count] : NULL;
}

} /* extern "C" */
