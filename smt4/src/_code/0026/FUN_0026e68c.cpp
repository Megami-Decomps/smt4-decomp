#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_0026e68c(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0031 = value;
}

} /* extern "C" */
