#include "shard/JobWork.h"

extern "C" {

/* Reads the job work area's signed byte at 0x8c. */
s32 bustupOwnerJobGetFrameByte(u32 job)
{
    return (s8)jobGetWork(job)->unk008C;
}

} /* extern "C" */
