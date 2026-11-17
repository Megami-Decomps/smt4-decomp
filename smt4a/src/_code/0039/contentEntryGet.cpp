#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct ContentEntry003983b8 {
    /* 0x00 */ u8 data[0x1c];
} ContentEntry003983b8;

void *dataTableGet(s32 table, s32 slot);
ContentEntry003983b8 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);

/* Entry `index` of data table 0x23's section 4, continuing into the add-on content's extra entries (NULL past the end). */
ContentEntry003983b8 *contentEntryGet(u32 index)
{
    void *table = dataTableGet(0x23, 4);
    ContentEntry003983b8 *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    AocSystemA *aoc = g_aocSystem;
    s32 extra = aoc->table23[4].count;
    ContentEntry003983b8 *extraEntries = (ContentEntry003983b8 *)aoc->table23[4].records;
    return index < extra + count ? &extraEntries[index - count] : NULL;
}

} /* extern "C" */
