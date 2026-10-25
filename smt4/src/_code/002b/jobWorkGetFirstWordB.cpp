#include "common.h"
#include "shard/JobWork.h"

extern "C" {


u32 jobWorkGetFirstWordB(u32 job)
{
    u32 *work = (u32 *)jobGetWork(job);

    return *work;
}

} /* extern "C" */
