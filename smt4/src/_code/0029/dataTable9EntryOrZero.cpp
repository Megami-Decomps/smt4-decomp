#include "common.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

void dataTableGet(s32 table, s32 slot);
u32 *dataTableGetEntries(void);

/* Returns entry `index` (1-based, up to 98) of data table 9; 0 beyond the table. */
u32 dataTable9EntryOrZero(s32 index)
{
    u32 *entries;

    dataTableGet(9, 1);
    entries = dataTableGetEntries();
    return index >= 99 ? 0 : entries[index - 1];
}

} /* extern "C" */
