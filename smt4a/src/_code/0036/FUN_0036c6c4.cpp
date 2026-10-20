#include "gamedata/DataTable.h"

extern "C" {

/* Entry of the data table section: a 16-bit id and 16 more bits. */
typedef struct DataEntry {
    u16 id;
    u16 value;
} DataEntry;

/* The id of entry `index` of data table 0xe's section 1, 0 past the end. */
u16 FUN_0036c6c4(u32 index)
{
    void *section = dataTableGet(0xe, 1);
    DataEntry *entries = (DataEntry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);

    if (index >= count) {
        return 0;
    }
    return entries[index].id;
}

} /* extern "C" */
