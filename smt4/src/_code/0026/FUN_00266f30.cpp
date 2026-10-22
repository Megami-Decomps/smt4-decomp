#include "addon/aocMain.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 data[0x34];
} TableEntry;


extern AocSystem *g_aocSystem;

u32 dataTableGet(u32 id, u32 section);
u32 dataTableGetCount(u32 table);
TableEntry *dataTableGetEntries(void);
u32 FUN_0025bed8(AocSystem *aoc, s32 id, s32 section);
TableEntry *dataPackageGetDollarRecord(AocSystem *aoc, u32 index);

/* Returns entry `index` of data table 0x2A, continuing into the add-on content table past its end (NULL when out of range). */
TableEntry *FUN_00266f30(u32 index)
{
    u32 table = dataTableGet(0x2A, 0);
    TableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x24, 0) + count) {
        return dataPackageGetDollarRecord(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
