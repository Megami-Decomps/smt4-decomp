#include "shard/Shard0034.h"

extern "C" {

extern Work16 *jobGetWork(u32 job);

void jobSetWork16(u32 job, u8 value)
{
    jobGetWork(job)->value = value;
}

} /* extern "C" */
