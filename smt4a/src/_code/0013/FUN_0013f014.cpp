#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern JobStatusState g_allocationAddressRanges;
extern void *jobGetWork(u32 job);

/* Clears the cached work pointer after querying the active job. */
s32 FUN_0013f014(u32 job)
{
    jobGetWork(job);
    g_allocationAddressRanges.work = NULL;
    return 0;
}

} /* extern "C" */
