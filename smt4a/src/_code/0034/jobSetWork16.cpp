#include "shard/Shard0034.h"
#include "shard/JobWork.h"

extern "C" {


void jobSetWork16(u32 job, u8 value)
{
    ((Work16 *)jobGetWork(job))->value = value;
}

} /* extern "C" */
