/* NON_MATCHING: canonical table receiver and additional-entry snapshot recovered; paired count/entries load and sum register differ. */
#include "common.h"
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
    const AocExtra extra = g_aocSystem->extra;
    if (index < extra.count + count) {
        return &extra.entries[index - count];
    }
    return NULL;
}

} /* extern "C" */
