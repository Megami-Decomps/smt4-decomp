#include "addon/aocMain.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0xc];
} Entry;

extern AocSystemA *g_aocSystem;

void *dataTableGet(u32 table, u32 section);
Entry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 FUN_0046c35c(AocSystemA *system, s32 kind, s32 arg);
Entry *dataArchiveGetMergedRecord(AocSystemA *system, u32 index);

/* Returns entry `index` of data table 42: from the base table, then from the add-on content's entries (which follow it); NULL past both. */
Entry *FUN_0037976c(u32 index)
{
    void *table = dataTableGet(42, 1);
    Entry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= FUN_0046c35c(g_aocSystem, 36, 0) + count) {
        return NULL;
    }
    return dataArchiveGetMergedRecord(g_aocSystem, index - count);
}

} /* extern "C" */
