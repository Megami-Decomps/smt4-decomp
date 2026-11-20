#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void eventTexJobSetState(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk0094 = value;
}

} /* extern "C" */
