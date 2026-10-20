#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern int jobIsValid(u32 job);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 jobs[0x1C];
    /* 0x7C */ u8 unk7C[8];
    /* 0x84 */ int current;
} JobWork;

extern JobWork *jobGetWork(void);

/* Stops the job at the current index. */
void FUN_002c9e00(void)
{
    JobWork *work = jobGetWork();

    if (jobIsValid(work->jobs[work->current]) != 0) {
        jobStop(work->jobs[work->current], 0);
        return;
    }
}

} /* extern "C" */
