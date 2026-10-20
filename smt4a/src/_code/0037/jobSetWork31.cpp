#include "shard/Shard0037.h"

extern "C" {

typedef struct Work31 {
    /* 0x00 */ u8 unk00[0x31];
    /* 0x31 */ u8 unk31;
} Work31;

extern Work31 *jobGetWork(u32 job);

void jobSetWork31(u32 job, u8 value)
{
    Work31 *work = jobGetWork(job);

    work->unk31 = value;
}

} /* extern "C" */
