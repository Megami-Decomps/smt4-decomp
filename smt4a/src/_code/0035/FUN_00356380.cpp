#include "gamedata/DataTable.h"
#include "addon/AocSystemA.h"

struct TableEntry {
    u8 unk00[0x2C];
};

extern "C" {

/* Looks up entry `index` of data table 0x23/5, continuing into the add-on content entries past its end. */
TableEntry *FUN_00356380(u32 index)
{
    void *section = dataTableGet(0x23, 5);
    TableEntry *entries = (TableEntry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index < count) {
        return &entries[index];
    }
    AocSystemA *aoc = g_aocSystem;
    AocRecordList list = aoc->table23[5];
    if (index < list.count + count) {
        return &((TableEntry *)list.records)[index - count];
    }
    return NULL;
}

} /* extern "C" */
