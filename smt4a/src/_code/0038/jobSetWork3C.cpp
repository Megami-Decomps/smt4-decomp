#include "shard/Shard0038.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct Work3C {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 unk3C;
} Work3C;


void jobSetWork3C(u32 job, u32 value)
{
    Work3C *work = (Work3C *)jobGetWork(job);

    work->unk3C = value;
}

} /* extern "C" */
