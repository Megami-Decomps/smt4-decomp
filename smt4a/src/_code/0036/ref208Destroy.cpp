#include "shard/Shard0036.h"

extern "C" {

extern Ref208 DAT_0057f208;
extern Work0C *jobGetWork(u32 job);
extern void FUN_00237210(u32 handle);
extern void FUN_0019a7f4(s32 a, s32 b);
extern void asdTMTexTableFreeEntry(s32 index);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area and clears the reference to it. */
void ref208Destroy(u32 job)
{
    Work0C *work = jobGetWork(job);

    FUN_00237210(work->handleA);
    FUN_00237210(work->handleB);
    FUN_0019a7f4(0x22, 0);
    asdTMTexTableFreeEntry(0x22);
    asdMemFree(work);
    DAT_0057f208.work = NULL;
}

} /* extern "C" */
