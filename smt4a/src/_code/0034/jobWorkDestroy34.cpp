#include "shard/Shard0034.h"
#include "shard/JobWork.h"

extern "C" {

extern void resourceReleaseReference(void *p);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area, releasing the object at +0x34 first. */
void jobWorkDestroy34(u32 job)
{
    JobWork34 *work = (JobWork34 *)jobGetWork(job);

    if (work->unk34 != NULL) {
        resourceReleaseReference(work->unk34);
        work->unk34 = NULL;
    }
    asdMemFree(work);
}

} /* extern "C" */
