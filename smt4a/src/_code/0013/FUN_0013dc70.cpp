#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void FUN_0014a960(s32 enable);

/* Advances the job's white fade-in by one frame, ending it after fadeFrames frames. */
s32 FUN_0013dc70(u32 job)
{
    JobWork *work = (JobWork *)jobGetWork(job);
    s32 alpha;

    if (!work->fadeActive) {
        return 0;
    }
    if (!work->fadeEnabled) {
        return 0;
    }
    work->fadeFrame++;
    if (work->fadeFrame > work->fadeFrames) {
        work->fadeActive = 0;
        return 0;
    }
    alpha = 255 - work->fadeFrame * 255 / work->fadeFrames;
    if (alpha > 255) {
        alpha = 255;
    } else if (alpha < 0) {
        alpha = 0;
    }
    work->fadeColor = 0xFFFFFF00 | alpha;
    FUN_0014a960(1);
    return 0;
}

} /* extern "C" */
