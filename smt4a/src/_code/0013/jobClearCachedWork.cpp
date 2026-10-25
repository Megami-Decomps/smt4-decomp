#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/JobWork.h"

extern "C" {

extern JobStatusState g_allocationAddressRanges;

/* Clears the cached work pointer after querying the active job. */
s32 jobClearCachedWork(u32 job)
{
    jobGetWork(job);
    g_allocationAddressRanges.work = NULL;
    return 0;
}

} /* extern "C" */
