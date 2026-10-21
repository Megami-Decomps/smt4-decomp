#include "common.h"

extern "C" {
void *jobGetWork(u32 job);
void asdMemFree(void *memory);

/* Releases a job's work allocation if present. */
void jobFreeWork(u32 job)
{
    void *work = jobGetWork(job);
    if (work != NULL) {
        asdMemFree(work);
    }
}
}
