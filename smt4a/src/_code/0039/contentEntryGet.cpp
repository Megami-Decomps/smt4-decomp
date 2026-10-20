/* NON_MATCHING: retail loads extraEntries before the range test and conditionally executes the extra-entry address (subcc/rsbcc/addcc/movcs); the build branches */
#include "common.h"

extern "C" {

typedef struct ContentEntry003983b8 {
    /* 0x00 */ u8 data[0x1c];
} ContentEntry003983b8;

typedef struct AocSystem003983b8 {
    /* 0x000 */ u8 unk000[0x404];
    /* 0x404 */ s32 extraCount;
    /* 0x408 */ ContentEntry003983b8 *extraEntries;
} AocSystem003983b8;

void *dataTableGet(s32 table, s32 slot);
ContentEntry003983b8 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

extern AocSystem003983b8 *g_aocSystem; /* 0x433158 */

/* Entry `index` of data table 0x23's section 4, continuing into the add-on content's extra entries (NULL past the end). */
ContentEntry003983b8 *contentEntryGet(u32 index)
{
    void *table = dataTableGet(0x23, 4);
    ContentEntry003983b8 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    ContentEntry003983b8 *entry;

    if (index < count) {
        entry = &entries[index];
    } else {
        if (index < g_aocSystem->extraCount + count) {
            entry = &g_aocSystem->extraEntries[index - count];
        } else {
            entry = NULL;
        }
    }
    return entry;
}

} /* extern "C" */
