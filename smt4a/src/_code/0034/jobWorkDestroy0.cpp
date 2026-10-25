#include "shard/Shard0034.h"
#include "shard/JobWork.h"

extern "C" {

extern void objDestroyIfSet(s32 *p);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area. */
void jobWorkDestroy0(u32 job)
{
    JobWork0 *work = (JobWork0 *)jobGetWork(job);

    objDestroyIfSet(work->first);
    if (work != NULL) {
        asdMemFree(work);
    }
}

} /* extern "C" */
