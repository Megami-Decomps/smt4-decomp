#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x31];
    /* 0x31 */ u8 unk31;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_0026e68c(u32 unused, u8 value)
{
    JobWork *work = jobGetWork();

    work->unk31 = value;
}

} /* extern "C" */
