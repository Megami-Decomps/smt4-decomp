#include "shard/Shard0031.h"

extern "C" {

extern JobWorkC *jobGetWork(u32 job);

u8 eventTexJobSlotsDone(u32 job)
{
    return jobGetWork(job)->unk0C == 0;
}

} /* extern "C" */
