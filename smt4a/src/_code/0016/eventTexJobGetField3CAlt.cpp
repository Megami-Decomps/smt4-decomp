#include "shard/JobWork.h"

extern "C" {

/* Returns the word at 0x3C of the job work area. */
u32 eventTexJobGetField3CAlt(u32 job)
{
    JobWork *work = jobGetWork(job);
    return work->unk003C;
}

} /* extern "C" */
