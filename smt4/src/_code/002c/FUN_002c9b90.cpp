#include "common.h"

extern "C" {

typedef struct DataTableEntry {
    /* 0x00 */ u8 data[0x14];
} DataTableEntry;

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3FC];
    /* 0x3FC */ u32 entryCount;
    /* 0x400 */ DataTableEntry *entries;
} AocSystem;

extern AocSystem *g_aocSystem;

u32 dataTableGet(u32 id, u32 section);
u32 dataTableGetCount(u32 table);
DataTableEntry *dataTableGetEntries(void);

/* Returns entry `index` of the base data table, continuing into the add-on content table past its end (NULL when out of range). */
DataTableEntry *FUN_002c9b90(u32 index)
{
    u32 table = dataTableGet(0x23, 3);
    DataTableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    AocSystem *aoc = g_aocSystem;
    u32 extra = aoc->entryCount;
    DataTableEntry *extraEntries = aoc->entries;
    return index < extra + count ? extraEntries + (index - count) : NULL;
}

} /* extern "C" */
