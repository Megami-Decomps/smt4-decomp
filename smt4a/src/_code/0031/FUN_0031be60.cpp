#include "shard/Shard0031.h"

extern "C" {

extern JobWorkC *jobGetWork(u32 job);

u8 FUN_0031be60(u32 job)
{
    return jobGetWork(job)->unk04 == 0;
}

} /* extern "C" */
