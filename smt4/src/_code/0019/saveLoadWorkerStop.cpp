#include "shard/Sys44de28.h"

extern "C" {

int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

/* Stops the worker's job and frees it. */
void saveLoadWorkerStop(void)
{
    Worker *worker = g_saveLoadUIFlags.worker;

    if (g_saveLoadUIFlags.worker != NULL) {
        worker->stopRequested = 1;
        jobStop(worker->job, 0);
        asdMemFree(worker);
        g_saveLoadUIFlags.worker = NULL;
    }
}

} /* extern "C" */
