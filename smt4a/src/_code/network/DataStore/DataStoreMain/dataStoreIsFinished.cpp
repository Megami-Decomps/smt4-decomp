/* Returns 1 when the DataStore has reached its finished state (14), otherwise 0. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobFind(u32 task);                /* nonzero while the task exists */

extern DataStoreCtrl *g_dataStore;

u32 dataStoreIsFinished(void)
{
    if (g_dataStore == NULL || jobFind(g_dataStore->task) == 0 || g_dataStore->work->state != 0xe) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
