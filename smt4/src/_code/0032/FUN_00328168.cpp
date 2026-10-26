/* NON_MATCHING: the bounds-checked lookup is a static helper (NULL now hoisted in r9 like retail); armcc still orients the index/count compare as `cmp count, index; addhi` (retail `cmp index, count; addcc`) and sets dataTableGet's r0/r1 in the other order in the loop body. */
#include "gamedata/DataTable.h"

/* A table 0x2E section 3 entry, keyed by two signed bytes. */
struct Table2eSub3Entry {
    /* 0x00 */ s8 first;
    /* 0x01 */ s8 second;
    /* 0x02 */ u8 unk02[0x12];
};

extern "C" {

static Table2eSub3Entry *table2eSub3EntryAt(u32 index)
{
    DataTableView<Table2eSub3Entry> table(0x2e, 3);
    if (index < table.count)
        return &table.entries[index];
    return NULL;
}

/* Finds the table 0x2E section 3 entry with the given key pair, or NULL. */
Table2eSub3Entry *FUN_00328168(s32 first, s32 second)
{
    for (s32 index = 0; index < (s32)dataTableGetCount(dataTableGet(0x2e, 3)); index++) {
        Table2eSub3Entry *entry = table2eSub3EntryAt(index);
        if (entry->first == first && entry->second == second) {
            return entry;
        }
    }
    return NULL;
}

} /* extern "C" */
