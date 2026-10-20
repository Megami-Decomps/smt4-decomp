#include "shard/Shard0037.h"

extern "C" {

typedef struct Work7C {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u32 unk80;
} Work7C;

extern Work7C *jobGetWork(u32 job);

void jobSetWork7C(u32 job, u32 a, u32 b)
{
    Work7C *work = jobGetWork(job);

    work->unk7C = a;
    work->unk80 = b;
}

} /* extern "C" */
