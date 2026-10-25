/* NON_MATCHING: register choice only: retail loads g_aocSystem into r2 and adds the list offset in place, this build uses r1 then r2 */
#include "gamedata/DataTable.h"

extern "C" {

typedef struct Entry {
    u8 data[0x2C];
} Entry;

typedef struct EntryList {
    u32 count;
    Entry *entries;
} EntryList;

typedef struct AocSystem {
    /* 0x000 */ u8 unk000[0x40C];
    /* 0x40C */ EntryList extra;
} AocSystem;

extern AocSystem *g_aocSystem;


/* Returns entry `index` of data table 0x23/5, or of the AOC system's extra entries that follow it; NULL when out of range. */
Entry *FUN_00276264(u32 index)
{
    void *table = dataTableGet(0x23, 5);
    Entry *entries = static_cast<Entry *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return &entries[index];
    }
    EntryList *list = &g_aocSystem->extra;
    EntryList extra = *list;

    if (index < extra.count + count) {
        return &extra.entries[index - count];
    }
    return NULL;
}

} /* extern "C" */
