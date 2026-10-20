#include "shard/Shard0034.h"

extern "C" {

extern JobWork34 *jobGetWork(u32 job);
extern void FUN_0040a244(void *p);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area, releasing the object at +0x34 first. */
void jobWorkDestroy34(u32 job)
{
    JobWork34 *work = jobGetWork(job);

    if (work->unk34 != NULL) {
        FUN_0040a244(work->unk34);
        work->unk34 = NULL;
    }
    asdMemFree(work);
}

} /* extern "C" */
