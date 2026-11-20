#include "gamedata/DataTable.h"
#include "gamedata/Table23Section3Record.h"
#include "addon/AocSystemA.h"

extern "C" {

/* Returns record `index` of data table 0x23 section 3, continuing into the add-on content's
 * records past the base ones (NULL when out of range). */
Table23Section3Record *aocDataTable23Section3GetEntry(u32 index)
{
    void *section = dataTableGet(0x23, 3);
    Table23Section3Record *entries = (Table23Section3Record *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index < count) {
        return entries + index;
    }
    AocSystemA *aoc = g_aocSystem;
    u32 extra = aoc->table23[3].count;
    Table23Section3Record *extraEntries = (Table23Section3Record *)aoc->table23[3].records;
    return index < extra + count ? extraEntries + (index - count) : NULL;
}

} /* extern "C" */
