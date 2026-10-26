#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_002b7160(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0031 = value;
}

} /* extern "C" */
