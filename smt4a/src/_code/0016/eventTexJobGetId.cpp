#include "shard/JobWork.h"

extern "C" {

/* Returns the first word of the job work area. */
u32 eventTexJobGetId(void)
{
    JobWork *work = jobGetWork();
    return work->unk0000;
}

} /* extern "C" */
