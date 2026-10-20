#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x1C];
} TableEntry; /* 0x1C */

extern void *g_aocSystem;
extern void *dataTableGet(s32 group, s32 index);
extern TableEntry *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);
extern u32 FUN_0025bed8(void *aoc, s32 type, s32 flag);
extern TableEntry *FUN_00389948(void *aoc, u32 index);

/* Returns table entry `index` of table 0x29/3, continuing into the AOC content entries after the base ones; NULL when out of range. */
TableEntry *dataTable29GetEntryWithAoc(u32 index)
{
    void *table = dataTableGet(0x29, 3);
    TableEntry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x23, 3) + count) {
        return FUN_00389948(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
