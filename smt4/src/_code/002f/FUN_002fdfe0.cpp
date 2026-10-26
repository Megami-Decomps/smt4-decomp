#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_002fdfe0(u32 handle, u32 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0038 = value;
}

} /* extern "C" */
