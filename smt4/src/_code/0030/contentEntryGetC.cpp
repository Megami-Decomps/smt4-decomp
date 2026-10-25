#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry0030f654 {
    /* 0x00 */ u8 data[0x18];
} Entry0030f654;

typedef struct AocSystem0030f654 AocSystem0030f654;

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);
s32 FUN_0025bed8(AocSystem0030f654 *aoc, s32 kind, s32 slot);
Entry0030f654 *contentEntryGetFromFiles2(AocSystem0030f654 *aoc, u32 index);

extern AocSystem0030f654 *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x29's section 2, continuing into the add-on content's entries (NULL past the end). */
Entry0030f654 *contentEntryGetC(u32 index)
{
    void *table = dataTableGet(0x29, 2);
    Entry0030f654 *entries = reinterpret_cast<Entry0030f654 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x23, 2) + count) {
        return contentEntryGetFromFiles2(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
