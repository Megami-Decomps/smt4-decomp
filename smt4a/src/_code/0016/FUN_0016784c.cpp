#include "shard/JobWork.h"

extern "C" {

/* Stores `value` in the byte at 0x8C of the job work area. */
void FUN_0016784c(u32 job, u8 value)
{
    JobWork *work = jobGetWork(job);
    work->unk008C = value;
}

} /* extern "C" */
