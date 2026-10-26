#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_0012640c(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0094 = value;
}

} /* extern "C" */
