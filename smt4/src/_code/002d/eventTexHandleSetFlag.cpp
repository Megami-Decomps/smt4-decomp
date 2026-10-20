#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u8 unk16;
} JobWork;

extern JobWork *jobGetWork(void);

void eventTexHandleSetFlag(u32 unused, u8 value)
{
    JobWork *work = jobGetWork();

    work->unk16 = value;
}

} /* extern "C" */
