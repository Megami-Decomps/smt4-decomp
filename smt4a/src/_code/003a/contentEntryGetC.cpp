#include "common.h"

extern "C" {

typedef struct Entry003a3070 {
    /* 0x00 */ u8 data[0x1c];
} Entry003a3070;

typedef struct AocSystem003a3070 AocSystem003a3070;

void *dataTableGet(s32 table, s32 slot);
Entry003a3070 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 FUN_0046c35c(AocSystem003a3070 *aoc, s32 kind, s32 slot);
Entry003a3070 *contentEntryGetFromFiles2(AocSystem003a3070 *aoc, u32 index);

extern AocSystem003a3070 *g_aocSystem; /* 0x570280 */

/* Entry `index` of data table 0x29's section 2, continuing into the add-on content's entries (NULL past the end). */
Entry003a3070 *contentEntryGetC(u32 index)
{
    void *table = dataTableGet(0x29, 2);
    Entry003a3070 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x23, 2) + count) {
        return contentEntryGetFromFiles2(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
