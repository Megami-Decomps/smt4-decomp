#include "common.h"

extern "C" {

int FUN_00294f64(void);
int asdMemFree(int ptr);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ int unk34;
} JobWork;

extern JobWork *jobGetWork(void);

void jobWorkRelease(void)
{
    JobWork *work = jobGetWork();

    if (work->unk34 != 0) {
        FUN_00294f64();
        work->unk34 = 0;
    }
    asdMemFree((int)work);
}

} /* extern "C" */
