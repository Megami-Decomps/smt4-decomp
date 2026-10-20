#include "common.h"

extern "C" {

int asdMemFree(...);
int FUN_002c56dc(int a);
int FUN_002c5728(int a);
int FUN_002c5758(int a);

typedef struct JobWork {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int buffer;
} JobWork;

extern JobWork *jobGetWork(u32 job);

void FUN_00324b74(u32 job)
{
    JobWork *work;

    FUN_002c5758(1);
    FUN_002c5728(1);
    FUN_002c56dc(1);
    work = jobGetWork(job);
    if (work->buffer != 0) {
        asdMemFree(work->buffer);
    }
    asdMemFree(work);
}

} /* extern "C" */
