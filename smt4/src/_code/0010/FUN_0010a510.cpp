#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern JobStatusState DAT_00465120;
extern void *jobGetWork(u32 job);

/* Clears the cached work pointer after querying the active job. */
s32 FUN_0010a510(u32 job)
{
    jobGetWork(job);
    DAT_00465120.work = NULL;
    return 0;
}

} /* extern "C" */
