#include "shard/Sys44de28.h"

extern "C" {

int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

/* Stops the worker's job and frees it. */
void FUN_0019207c(void)
{
    Worker *worker = DAT_0044de28.worker;

    if (DAT_0044de28.worker != NULL) {
        worker->stopRequested = 1;
        jobStop(worker->job, 0);
        asdMemFree(worker);
        DAT_0044de28.worker = NULL;
    }
}

} /* extern "C" */
