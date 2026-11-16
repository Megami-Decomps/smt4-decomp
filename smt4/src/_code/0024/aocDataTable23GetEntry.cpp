#include "gamedata/DataTable.h"

extern "C" {

typedef struct AocEntry {
    /* 0x00 */ u8 unk00[0x20];
} AocEntry; /* 0x20 bytes */

typedef struct AocExtra {
    /* 0x0 */ s32 count;
    /* 0x4 */ AocEntry *entries;
} AocExtra;

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3F4];
    /* 0x3F4 */ AocExtra extra;     /* entries added by the add-on content */
} AocSystem;

extern AocSystem *g_aocSystem;

/* Returns entry `index` of data table 0x23: the base entries first, then the add-on ones; NULL when out of range. */
AocEntry *aocDataTable23GetEntry(u32 index)
{
    void *table = dataTableGet(0x23, 2);
    AocEntry *entries = static_cast<AocEntry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    s32 extraCount = g_aocSystem->extra.count;
    AocEntry *extraEntries = g_aocSystem->extra.entries;
    if (index < extraCount + count) {
        return &extraEntries[index - count];
    }
    return NULL;
}

} /* extern "C" */
