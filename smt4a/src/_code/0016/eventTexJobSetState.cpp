#include "shard/JobWork.h"

extern "C" {

/* Stores `value` in the byte at 0xB8 of the job work area. */
void eventTexJobSetState(u32 job, u8 value)
{
    JobWork *work = jobGetWork(job);
    work->unk00B8 = value;
}

} /* extern "C" */
