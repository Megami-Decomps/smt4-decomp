#include "addon/aocMain.h"

extern "C" {

typedef struct Entry {
    u8 data[0x2C];
} Entry;


extern AocSystemA *g_aocSystem;

extern void *dataTableGet(u32 table, u32 index);
extern u32 dataTableGetCount(void *table);
extern Entry *dataTableGetEntries(void);
extern u32 FUN_0046c35c(AocSystemA *system, s32 kind, s32 index);
extern Entry *FUN_0046dfb4(AocSystemA *system, u32 index);

/* Returns entry `index` of data table 0x31, or of the AOC system's extra entries that follow it; NULL when out of range. */
Entry *FUN_003689d0(u32 index)
{
    void *table = dataTableGet(0x31, 0);
    Entry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x26, 0) + count) {
        return FUN_0046dfb4(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
