#include "common.h"

extern "C" {

typedef struct Entry {
    u8 data[0x20];
} Entry;

typedef struct AocSystem AocSystem;

extern AocSystem *g_aocSystem;

extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern Entry *dataTableGetEntries(void);
extern u32 FUN_0046c35c(AocSystem *system, s32 kind, s32 index);
extern Entry *FUN_00470974(AocSystem *system, u32 index);

/* Returns entry `index` of data table 0x29/3, or of the AOC system's extra entries that follow it; NULL when out of range. */
Entry *FUN_003a30e8(u32 index)
{
    void *table = dataTableGet(0x29, 3);
    Entry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x23, 3) + count) {
        return FUN_00470974(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
