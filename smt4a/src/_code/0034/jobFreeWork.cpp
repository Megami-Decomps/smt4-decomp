#include "common.h"
#include "shard/JobWork.h"

extern "C" {
void asdMemFree(void *memory);

/* Releases a job's work allocation if present. */
void jobFreeWork(u32 job)
{
    void *work = (void *)jobGetWork(job);
    if (work != NULL) {
        asdMemFree(work);
    }
}
}
