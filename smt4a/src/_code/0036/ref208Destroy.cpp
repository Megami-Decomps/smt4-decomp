#include "shard/Shard0036.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/JobWork.h"

extern "C" {

extern Ref208 g_commonBg;
extern void asdMemFreeSlot(u32 handle);
extern void asdTMTexTableReleaseNode(s32 a, s32 b);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area and clears the reference to it. */
void ref208Destroy(u32 job)
{
    Work0C *work = (Work0C *)jobGetWork(job);

    asdMemFreeSlot(work->handleA);
    asdMemFreeSlot(work->handleB);
    asdTMTexTableReleaseNode(0x22, 0);
    asdTMTexTableFreeEntry(0x22);
    asdMemFree(work);
    g_commonBg.work = NULL;
}

} /* extern "C" */
