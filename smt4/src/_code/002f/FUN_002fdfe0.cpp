#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_002fdfe0(u32 unused, u32 value)
{
    JobWork *work = jobGetWork();

    work->unk38 = value;
}

} /* extern "C" */
