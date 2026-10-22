#include "addon/aocMain.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x28];
} Entry;

extern AocSystemA *g_aocSystem;

void *dataTableGet(u32 table, u32 section);
Entry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 FUN_0046c35c(AocSystemA *system, s32 kind, s32 arg);
Entry *FUN_0046ea50(AocSystemA *system, u32 index);

/* Returns entry `index` of data table 48: from the base table, then from the add-on content's entries (which follow it); NULL past both. */
Entry *FUN_003799d0(u32 index)
{
    void *table = dataTableGet(48, 0);
    Entry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= FUN_0046c35c(g_aocSystem, 39, 0) + count) {
        return NULL;
    }
    return FUN_0046ea50(g_aocSystem, index - count);
}

} /* extern "C" */
