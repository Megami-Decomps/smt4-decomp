#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry00291ba4 {
    /* 0x00 */ u8 data[0x2c];
} Entry00291ba4;

typedef struct AocSystem00291ba4 AocSystem00291ba4;

void *dataTableGet(s32 table, s32 slot);
u32 dataTableGetCount(void *table);
s32 FUN_0025bed8(AocSystem00291ba4 *aoc, s32 kind, s32 slot);
Entry00291ba4 *FUN_00389a1c(AocSystem00291ba4 *aoc, u32 index);

extern AocSystem00291ba4 *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x29's section 4, continuing into the add-on content's entries (NULL past the end). */
Entry00291ba4 *contentEntryGetD(u32 index)
{
    void *table = dataTableGet(0x29, 4);
    Entry00291ba4 *entries = reinterpret_cast<Entry00291ba4 *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x23, 4) + count) {
        return FUN_00389a1c(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
