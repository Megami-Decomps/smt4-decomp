#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void bustupOwnerJobSetFrameByte(u32 handle, u8 value)
{
    JobWork *work = jobGetWork(handle);

    work->unk008C = value;
}

} /* extern "C" */
