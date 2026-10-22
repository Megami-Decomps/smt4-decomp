#include "addon/aocMain.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x28];
} Entry;

extern AocSystem *g_aocSystem;

void *dataTableGet(u32 table, u32 section);
Entry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 FUN_0025bed8(AocSystem *system, s32 kind, s32 arg);
Entry *FUN_00387eb4(AocSystem *system, u32 index);

/* Returns entry `index` of data table 48: from the base table, then from the add-on content's entries (which follow it); NULL past both. */
Entry *FUN_0025b670(u32 index)
{
    void *table = dataTableGet(48, 0);
    Entry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= FUN_0025bed8(g_aocSystem, 39, 0) + count) {
        return NULL;
    }
    return FUN_00387eb4(g_aocSystem, index - count);
}

} /* extern "C" */
