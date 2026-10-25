#include "common.h"
#include "shard/JobWork.h"

namespace { struct JobStatusWork { u32 job; s32 first; s32 second; }; }

extern "C" {
/* Reads or updates the current object state. */
s32 jobGetStatus(u32 job)
{
    JobStatusWork *work = (JobStatusWork *)jobGetWork(job);
    return work->first + work->second;
}
}
