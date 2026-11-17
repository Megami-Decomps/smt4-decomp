#include "common.h"
#include "addon/AocSystemA.h"

extern "C" {

typedef struct DataTableEntry {
    /* 0x00 */ u8 data[0x14];
} DataTableEntry;

u32 dataTableGet(u32 id, u32 section);
u32 dataTableGetCount(u32 table);
DataTableEntry *dataTableGetEntries(void);

/* Returns entry `index` of the base data table, continuing into the add-on content table past its end (NULL when out of range). */
DataTableEntry *FUN_00327558(u32 index)
{
    u32 table = dataTableGet(0x23, 3);
    DataTableEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        return entries + index;
    }
    AocSystemA *aoc = g_aocSystem;
    u32 extra = aoc->table23[3].count;
    DataTableEntry *extraEntries = (DataTableEntry *)aoc->table23[3].records;
    return index < extra + count ? extraEntries + (index - count) : NULL;
}

} /* extern "C" */
