#include "common.h"

extern "C" {

int asdMemFree(...);
int gameDataFlagsClear(int a);
int gameDataFlagsClearAndRefresh(int a);
int FUN_002c5758(int a);

typedef struct JobWork {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int buffer;
} JobWork;

extern JobWork *jobGetWork(u32 job);

void jobTeardownFlagsAndWork(u32 job)
{
    JobWork *work;

    FUN_002c5758(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
    work = jobGetWork(job);
    if (work->buffer != 0) {
        asdMemFree(work->buffer);
    }
    asdMemFree(work);
}

} /* extern "C" */
