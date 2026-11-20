#include "common.h"
#include "shard/JobWork.h"
#include "event/bustupEvent/BustupSlotControl_BustupCutAnim.h"

extern "C" {

int scrGetArg(int index);

/* Script command: shows texture frame argument 1 (row 1, column 1, with a transition) on the bust-up
 * slot whose work id is that of job argument 0. */
u32 scrCommBustupStartTransition(void)
{
    u32 job = scrGetArg(0);
    u32 workId = *(u32 *)jobGetWork(job); /* a job's work starts with its id */
    s32 frame = scrGetArg(1);

    bustupCutStartSlotTransition(workId, frame, 1, 1, 1);
    return 1;
}

} /* extern "C" */
