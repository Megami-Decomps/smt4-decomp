/* Returns the address of entry `index` (100 bytes each, 10 in all) of the DataStore, or 0. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

s32 dataStoreGetEntry(s32 index)
{
    if (g_dataStore == NULL || jobFind(g_dataStore->task) == 0 || g_dataStore->work->ready == 0 ||
        index > 9) {
        return 0;
    }
    return g_dataStore->work->entries + index * 100;
}

} /* extern "C" */
