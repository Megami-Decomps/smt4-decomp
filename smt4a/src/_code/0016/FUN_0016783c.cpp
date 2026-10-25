#include "shard/JobWork.h"

extern "C" {

/* Reads the job work area's signed byte at 0x8c. */
s32 FUN_0016783c(u32 job)
{
    return (s8)jobGetWork(job)->unk008C;
}

} /* extern "C" */
