#include "shard/Shard0038.h"

extern "C" {

typedef struct Work3C {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 unk3C;
} Work3C;

extern Work3C *jobGetWork(u32 job);

void jobSetWork3C(u32 job, u32 value)
{
    Work3C *work = jobGetWork(job);

    work->unk3C = value;
}

} /* extern "C" */
