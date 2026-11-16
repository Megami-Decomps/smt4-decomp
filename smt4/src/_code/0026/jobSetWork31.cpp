#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void jobSetWork31(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0031 = value;
}

} /* extern "C" */
