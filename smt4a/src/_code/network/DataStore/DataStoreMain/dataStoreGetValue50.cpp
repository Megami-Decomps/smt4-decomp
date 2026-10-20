/* Returns the DataStore's value at +0x50 once it is ready, otherwise 0. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

u32 dataStoreGetValue50(void)
{
    if (g_dataStore != NULL && jobFind(g_dataStore->task) != 0 && g_dataStore->work->ready != 0) {
        return g_dataStore->work->unk50;
    }
    return 0;
}

} /* extern "C" */
