#include "common.h"
#include "shard/JobWork.h"

extern "C" {

int asdMemFree(...);
int gameDataFlagsClear(int a);
int gameDataFlagsClearAndRefresh(int a);
int gameDataRemoveHomeButtonHold(int a);

typedef struct TeardownJobWork {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ int buffer;
} TeardownJobWork;


void jobTeardownFlagsAndWork(u32 job)
{
    TeardownJobWork *work;

    gameDataRemoveHomeButtonHold(1);
    gameDataFlagsClearAndRefresh(1);
    gameDataFlagsClear(1);
    work = (TeardownJobWork *)jobGetWork(job);
    if (work->buffer != 0) {
        asdMemFree(work->buffer);
    }
    asdMemFree(work);
}

} /* extern "C" */
