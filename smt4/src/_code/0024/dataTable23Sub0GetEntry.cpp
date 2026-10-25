/* NON_MATCHING: retail loads the AOC table count and entries pointer as a pair (add #996; ldm); built loads them as two separate ldr (both unconditional now) */
#include "common.h"
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Table23Entry {
    /* 0x00 */ u8 unk00[0x20];
} Table23Entry; /* 0x20 */

typedef struct AocTable23 {
    /* 0x0 */ s32 count;
    /* 0x4 */ Table23Entry *entries;
} AocTable23;

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x3E4];
    /* 0x3E4 */ AocTable23 table23;
} AocSystem;

extern AocSystem *g_aocSystem;
extern void *dataTableGet(s32 group, s32 index);
extern u32 dataTableGetCount(void *table);

/* Returns entry `index` of data table 0x23/0, continuing into the AOC content entries after the base ones; NULL when out of range. */
Table23Entry *dataTable23Sub0GetEntry(u32 index)
{
    void *table = dataTableGet(0x23, 0);
    Table23Entry *entries = reinterpret_cast<Table23Entry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    const AocTable23 *source = &g_aocSystem->table23;
    AocTable23 aoc = *source;
    if (index < aoc.count + count) {
        return &aoc.entries[index - count];
    }
    return NULL;
}

} /* extern "C" */
