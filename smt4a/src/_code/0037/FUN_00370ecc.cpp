#include "gamedata/DataTable.h"

extern "C" {

typedef struct Table10Entry {
    u16 id;       /* 0x00 */
    u8 unk02[6];
} Table10Entry;

/* Returns the entry of data table 10 (section 0) with the given id, or NULL. */
Table10Entry *FUN_00370ecc(u16 id)
{
    void *resource = dataTableGet(10, 0);
    Table10Entry *entries = (Table10Entry *)dataTableGetEntries(resource);
    u32 count = dataTableGetCount(resource);
    s32 i;

    for (i = 0; i < count; i++) {
        if (entries[i].id == id) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
