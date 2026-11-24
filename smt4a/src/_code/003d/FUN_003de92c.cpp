#include "gamedata/ProgressionUnlock.h"

extern "C" {

/* The table-28 section-3 record with the given id, or NULL. */
ProgressionUnlockRecord *FUN_003de92c(u32 id)
{
    void *table = dataTableGet(28, 3);
    ProgressionUnlockRecord *records = (ProgressionUnlockRecord *)dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    for (s32 i = 0; i < count; ++i) {
        if (records[i].id == id) {
            return &records[i];
        }
    }
    return NULL;
}

} /* extern "C" */
