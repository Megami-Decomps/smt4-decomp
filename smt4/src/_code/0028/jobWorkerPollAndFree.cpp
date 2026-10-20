#include "shard/Sys44de28.h"

extern "C" {

int asdMemFree(void *ptr);
extern int jobFind(u32 job);

/* Returns 1 while the worker's job is running (or no stop was requested); otherwise frees the worker and returns 0. */
u32 jobWorkerPollAndFree(void)
{
    Worker *worker = g_saveLoadUIFlags.worker;

    if (g_saveLoadUIFlags.worker != NULL) {
        if ((jobFind(g_saveLoadUIFlags.worker->job) != 0) || (worker->stopRequested == 0)) {
            return 1;
        }
        if (g_saveLoadUIFlags.worker != NULL) {
            asdMemFree(g_saveLoadUIFlags.worker);
            g_saveLoadUIFlags.worker = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
