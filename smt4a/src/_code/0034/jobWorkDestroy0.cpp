#include "shard/Shard0034.h"

extern "C" {

extern JobWork0 *jobGetWork(u32 job);
extern void objDestroyIfSet(s32 *p);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area. */
void jobWorkDestroy0(u32 job)
{
    JobWork0 *work = jobGetWork(job);

    objDestroyIfSet(work->first);
    if (work != NULL) {
        asdMemFree(work);
    }
}

} /* extern "C" */
