#include "gamedata/DataTable.h"

struct TableEntry {
    u8 unk00[0x2C];
};

struct TableEntryList {
    u32 count;              // 0x00
    TableEntry *entries;    // 0x04
};

struct AocSystem {
    u8 unk000[0x40C];       // 0x000
    TableEntryList list;    // 0x40C
};

extern "C" {
extern AocSystem *g_aocSystem; /* 0x570280 */

/* Looks up entry `index` of data table 0x23/5, continuing into the add-on content entries past its end. */
TableEntry *FUN_00356380(u32 index)
{
    void *section = dataTableGet(0x23, 5);
    TableEntry *entries = (TableEntry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index < count) {
        return &entries[index];
    }
    AocSystem *aoc = g_aocSystem;
    TableEntryList list = aoc->list;
    if (index < list.count + count) {
        return &list.entries[index - count];
    }
    return NULL;
}

} /* extern "C" */
