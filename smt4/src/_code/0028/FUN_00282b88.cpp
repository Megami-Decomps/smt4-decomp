#include "shard/Sys44de28.h"

extern "C" {

int asdMemFree(void *ptr);
extern int jobFind(u32 job);

/* Returns 1 while the worker's job is running (or no stop was requested); otherwise frees the worker and returns 0. */
u32 FUN_00282b88(void)
{
    Worker *worker = DAT_0044de28.worker;

    if (DAT_0044de28.worker != NULL) {
        if ((jobFind(DAT_0044de28.worker->job) != 0) || (worker->stopRequested == 0)) {
            return 1;
        }
        if (DAT_0044de28.worker != NULL) {
            asdMemFree(DAT_0044de28.worker);
            DAT_0044de28.worker = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
