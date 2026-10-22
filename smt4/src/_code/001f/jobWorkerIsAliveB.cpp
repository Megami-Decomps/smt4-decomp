#include "common.h"

extern "C" {

extern int jobFind(u32 job);

typedef struct Worker {
    /* 0x0 */ u32 job;
    /* 0x4 */ u8 stopRequested;
} Worker;

/* 1 when the worker exists and its job is still alive (or it was never asked to stop). */
extern Worker *DAT_0044e110;
u32 jobWorkerIsAliveB(void)
{
    Worker *worker = DAT_0044e110;

    if (worker != NULL && (jobFind(worker->job) != 0 || worker->stopRequested == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
