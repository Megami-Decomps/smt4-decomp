#include "shard/JobWork.h"

extern "C" {

/* Returns the word at 0x3C of the job work area. */
u32 FUN_00169580(void)
{
    JobWork *work = jobGetWork();
    return work->unk003C;
}

} /* extern "C" */
