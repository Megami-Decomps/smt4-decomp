#include "common.h"
#include "shard/JobWork.h"

extern "C" {

u32 FUN_00126714(u32 handle)
{
    JobWork *work = jobGetWork(handle);

    return work->unk003C;
}

} /* extern "C" */
