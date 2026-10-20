#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x20];
} Entry;

extern s32 g_aocSystem;

void *dataTableGet(u32 table, u32 section);
Entry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 FUN_0046c35c(s32 system, s32 kind, s32 arg);
Entry *FUN_0046ffb0(s32 system, u32 index);

/* Returns entry `index` of data table 45: from the base table, then from the add-on content's entries (which follow it); NULL past both. */
Entry *FUN_003797e4(u32 index)
{
    void *table = dataTableGet(45, 0);
    Entry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index >= FUN_0046c35c(g_aocSystem, 37, 0) + count) {
        return NULL;
    }
    return FUN_0046ffb0(g_aocSystem, index - count);
}

} /* extern "C" */
