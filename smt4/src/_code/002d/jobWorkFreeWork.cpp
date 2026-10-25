#include "common.h"
#include "shard/JobWork.h"

extern "C" {

int FUN_001ab998(u32 object);
int asdMemFree(u32 *ptr);

void jobWorkFreeWork(u32 job)
{
    u32 *work = (u32 *)jobGetWork(job);

    FUN_001ab998(*work);
    if (work != NULL) {
        asdMemFree(work);
        return;
    }
}

} /* extern "C" */
