/* NON_MATCHING: retail loads the add-on count and entry pointer together (`add r2, r2, #1012; ldm r2, {r1, r2}`); built loads them separately. */
#include "common.h"

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
extern u32 dataTableGetCount(u32 table);
extern AocEntry *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 kind);

/* Returns entry `index` of data table 0x23: the base entries first, then the add-on ones; NULL when out of range. */
AocEntry *aocDataTable23GetEntry(u32 index)
{
    u32 table = dataTableGet(0x23, 2);
    AocEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    AocExtra *extra;

    if (index < count) {
        return &entries[index];
    }
    extra = &g_aocSystem->extra;
    if (index < extra->count + count) {
        return &extra->entries[index - count];
    }
    return NULL;
}

} /* extern "C" */
