#include "shard/JobWork.h"

extern "C" {

/* Returns the first word of the job work area. */
u32 jobGetWorkId(u32 job)
{
    JobWork *work = jobGetWork(job);
    return work->unk0000;
}

} /* extern "C" */
