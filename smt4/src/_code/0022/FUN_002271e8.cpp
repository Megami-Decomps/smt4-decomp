#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_002271e8(u32 unused, u32 a, u32 b)
{
    JobWork *work = jobGetWork();

    work->unk58 = a;
    work->unk5C = b;
}

} /* extern "C" */
