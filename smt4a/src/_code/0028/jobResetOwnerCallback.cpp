#include "shard/Shard0042.h"

extern "C" JobPendingWork *jobGetWork(void);

/* Reset the callback owner attached to this job. */
extern "C" s32 jobResetOwnerCallback(void)
{
    jobGetWork()->owner->reset();
    return 0;
}
