#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u32 unk80;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_00227200(u32 unused, u32 a, u32 b)
{
    JobWork *work = jobGetWork();

    work->unk7C = a;
    work->unk80 = b;
}

} /* extern "C" */
