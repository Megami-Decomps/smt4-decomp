#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern int jobIsValid(u32 job);

typedef struct Worker {
    /* 0x0 */ u32 job;
} Worker;

void workerJobStop(Worker **owner)
{
    Worker *worker = *owner;

    if (jobIsValid(worker->job) != 0) {
        jobStop(worker->job, 0);
    }
}

} /* extern "C" */
