/* Returns 1 when the DataStore is running, not busy and has nothing pending at +0x28, otherwise 0. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

u32 dataStoreIsIdle(void)
{
    if (g_dataStore == NULL || jobFind(g_dataStore->task) == 0 ||
        g_dataStore->work->busy != 0 || g_dataStore->work->unk28 != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
