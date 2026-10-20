/* Shuts the DataStore down: frees its work area, kills its task and frees the controller. */
#include "common.h"
#include "network/DataStore/DataStoreMain.h"

extern "C" {

int jobStop(u32 task, int flags);     /* kill a task */
int asdMemFree(void *ptr);               /* heap free */
int jobIsValid(u32 task);                /* nonzero while the task exists */
int FUN_002e3328(void *ptr);
void *obj003fab40Release(void *ptr);

extern DataStoreCtrl *g_dataStore;

void dataStoreShutdown(void)
{
    if (g_dataStore->work != NULL) {
        FUN_002e3328(obj003fab40Release(g_dataStore->work));
        g_dataStore->work = NULL;
    }
    if (jobIsValid(g_dataStore->task) != 0) {
        jobStop(g_dataStore->task, 0);
    }
    if (g_dataStore != NULL) {
        asdMemFree(g_dataStore);
        g_dataStore = NULL;
    }
}

} /* extern "C" */
