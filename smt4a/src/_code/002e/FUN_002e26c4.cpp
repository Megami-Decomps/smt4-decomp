#include "gamedata/X14_Table21.h"
#include "shard/FUN_002e26c4.h"

extern "C" {

/* Returns the table 21 record with the given id, or NULL. */
Table21Entry *FUN_002e26c4(u32 id)
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

} /* extern "C" */
