#include "common.h"

struct DataEntry {
    u8 data[0x10];
};

struct AocSystem;

extern "C" {

extern AocSystem *g_aocSystem;
void *dataTableGet(u32 category, u32 variant);
DataEntry *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
u32 FUN_0046c35c(AocSystem *aoc, u32 kind, u32 variant);
DataEntry *dataFileSetGetTableEntry(AocSystem *aoc, u32 index);

// Entry `index` of the base data table, continuing into the add-on content's tables (NULL past the end).
DataEntry *FUN_00314638(u32 index)
{
    void *table = dataTableGet(0x2d, 4);
    DataEntry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x25, 4) + count) {
        return dataFileSetGetTableEntry(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
