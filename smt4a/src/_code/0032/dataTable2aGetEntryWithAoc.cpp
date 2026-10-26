#include "common.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x38];
} TableEntry; /* 0x38 */

extern void *g_aocSystem;
extern void *dataTableGet(s32 group, s32 index);
extern TableEntry *dataTableGetEntries(void *table);
extern u32 dataTableGetCount(void *table);
extern u32 FUN_0046c35c(void *aoc, s32 type, s32 flag);
extern TableEntry *FUN_0046c288(void *aoc, u32 index);

/* Returns table entry `index` of table 0x2a/0, continuing into the AOC content entries after the base ones; NULL when out of range. */
TableEntry *dataTable2aGetEntryWithAoc(u32 index)
{
    void *table = dataTableGet(0x2a, 0);
    TableEntry *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    if (index < FUN_0046c35c(g_aocSystem, 0x24, 0) + count) {
        return FUN_0046c288(g_aocSystem, index - count);
    }
    return NULL;
}

} /* extern "C" */
