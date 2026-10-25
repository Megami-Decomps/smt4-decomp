#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry0030f5e0 {
    /* 0x00 */ u8 data[8];
} Entry0030f5e0;

typedef struct AocSystem0030f5e0 AocSystem0030f5e0;

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);
s32 FUN_0025bed8(AocSystem0030f5e0 *aoc, s32 kind, s32 slot);
Entry0030f5e0 *contentEntryGetFromFiles1(AocSystem0030f5e0 *aoc, u32 index);

extern AocSystem0030f5e0 *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x29's section 1, continuing into the add-on content's entries (NULL past the end). */
Entry0030f5e0 *contentEntryGetB(u32 index)
{
    void *table = dataTableGet(0x29, 1);
    Entry0030f5e0 *entries = reinterpret_cast<Entry0030f5e0 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x23, 1) + count) {
        return contentEntryGetFromFiles1(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
