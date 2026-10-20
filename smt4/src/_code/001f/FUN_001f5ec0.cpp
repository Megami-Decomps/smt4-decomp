#include "common.h"

extern "C" {

extern int jobFind(u32 job);

typedef struct Worker {
    /* 0x0 */ u32 job;
    /* 0x4 */ u8 unk4[5];
    /* 0x9 */ u8 stopRequested;
} Worker;

/* 1 when the worker exists and its job is still alive (or it was never asked to stop). */
u32 FUN_001f5ec0(Worker **owner)
{
    Worker *worker = *owner;

    if (worker != NULL && (jobFind(worker->job) != 0 || worker->stopRequested == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
