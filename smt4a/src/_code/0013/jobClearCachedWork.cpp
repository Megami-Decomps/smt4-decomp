#include "shard/W5_W5Match1_RecordKeys.h"
#include "classes/AllocatorState.h"
#include "shard/JobWork.h"

extern "C" {


/* Clears the cached work pointer after querying the active job. */
s32 jobClearCachedWork(u32 job)
{
    jobGetWork(job);
    g_asdMemState.lastMapProcess = NULL;
    return 0;
}

} /* extern "C" */
