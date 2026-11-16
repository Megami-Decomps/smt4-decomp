#include "gamedata/X14_Table21.h"

// Inlined copy of FUN_00292844: the table 21 record with the given id, or NULL.
static Table21Entry *table21FindEntry(u32 id)
{
    void *section = dataTableGet(0x15, 0);
    Table21Entry *entries = (Table21Entry *)dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}

/* Find the payload belonging to an ID in the first section of table 21. */
extern "C" u8 *FUN_00241a64(u32 id)
{
    Table21Entry *entry = table21FindEntry(id);
    return entry != NULL ? entry->data.payload : NULL;
}
