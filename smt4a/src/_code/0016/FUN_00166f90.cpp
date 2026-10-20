#include "shard/JobWork.h"

extern "C" {

/* Returns the first word of the job work area. */
u32 FUN_00166f90(void)
{
    JobWork *work = jobGetWork();
    return work->unk0000;
}

} /* extern "C" */
