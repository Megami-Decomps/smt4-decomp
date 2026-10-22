#include "common.h"

extern "C" {

extern int jobFind(u32 job);

typedef struct Worker {
    /* 0x0 */ u32 job;
    /* 0x4 */ u8 stopRequested;
} Worker;

typedef struct Owner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ Worker *worker;
} Owner;

/* 1 when the worker exists and its job is still alive (or it was never asked to stop). */
u32 jobOwnerIsRunning(Owner *owner)
{
    Worker *worker = owner->worker;

    if (worker != NULL && (jobFind(worker->job) != 0 || worker->stopRequested == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
