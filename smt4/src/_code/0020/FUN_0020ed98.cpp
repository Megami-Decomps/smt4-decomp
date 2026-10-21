#include "common.h"

extern "C" {

int infoWinStartTimer(int arg);
int jobStop(u32 job, int mode);
extern int dialogIsActive(void);
extern int jobIsValid(u32 job);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 job;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_0020ed98(void)
{
    JobWork *work = jobGetWork();

    if (jobIsValid(work->job) == 0) {
        return;
    }
    if (dialogIsActive() != 0) {
        infoWinStartTimer(1);
    }
    jobStop(work->job, 0);
}

} /* extern "C" */
