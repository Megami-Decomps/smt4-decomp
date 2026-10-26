#include "common.h"
#include "code/Code0024_Smt4.h"

struct DataEntry {
    u8 data[0x10];
};

struct AocSystem;

extern "C" {

extern AocSystem *g_aocSystem;
void *dataTableGet(u32 category, u32 variant);
DataEntry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
u32 FUN_0025bed8(AocSystem *aoc, u32 kind, u32 variant);
DataEntry *contentEntryGetFromFiles4(AocSystem *aoc, u32 index);

// Entry `index` of the base data table, continuing into the add-on content's tables (NULL past the end).
DataEntry *FUN_0024ad14(u32 index)
{
    void *table = dataTableGet(0x2d, 2);
    DataEntry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x25, 2) + count) {
        return contentEntryGetFromFiles4(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
