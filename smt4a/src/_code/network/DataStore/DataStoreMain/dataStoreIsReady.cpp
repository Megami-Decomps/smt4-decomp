/* Returns nonzero once the DataStore is running and ready. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

u8 dataStoreIsReady(void)
{
    if (g_dataStore != NULL && jobFind(g_dataStore->task) != 0) {
        return g_dataStore->work->ready != 0;
    }
    return 0;
}

} /* extern "C" */
