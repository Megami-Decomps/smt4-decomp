#include "common.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0xc];
} TableEntry; /* 0xc */

extern void *g_aocSystem;
extern void *dataTableGet(s32 group, s32 index);
extern TableEntry *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);
extern u32 FUN_0025bed8(void *aoc, s32 type, s32 flag);
extern TableEntry *FUN_00387860(void *aoc, u32 index);

/* Returns table entry `index` of table 0x2d/1, continuing into the AOC content entries after the base ones; NULL when out of range. */
TableEntry *dataTable2dGetEntryWithAoc(u32 index)
{
    void *table = dataTableGet(0x2d, 1);
    TableEntry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0025bed8(g_aocSystem, 0x25, 1) + count) {
        return FUN_00387860(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
