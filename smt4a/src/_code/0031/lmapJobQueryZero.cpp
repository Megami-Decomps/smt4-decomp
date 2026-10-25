/* NON_MATCHING: retail redundantly loads a global word and conditionally clears r0 before returning zero. */
#include "shard/JobWork.h"

extern "C" {

/* Fetch the current job work and report zero. */
s32 lmapJobQueryZero(u32 job)
{
    jobGetWork(job);
    return 0;
}

}
