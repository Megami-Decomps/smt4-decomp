#include "common.h"

namespace { struct JobWork { u32 job; s32 first; s32 second; }; }

extern "C" {
/* Reads or updates the current object state. */
JobWork *jobGetWork(u32 job);
s32 jobGetStatus(u32 job)
{
    JobWork *work = jobGetWork(job);
    return work->first + work->second;
}
}
