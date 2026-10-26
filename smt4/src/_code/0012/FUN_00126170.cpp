#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_00126170(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk008C = value;
}

} /* extern "C" */
