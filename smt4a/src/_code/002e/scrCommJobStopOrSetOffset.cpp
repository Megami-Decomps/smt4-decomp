#include "common.h"
#include "shard/JobWork.h"

extern "C" {

/* Per-job work area: the job's state at 0x04, a float offset and its "offset set" flag at 0x10/0x14. */
typedef struct JobState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 offset;
    /* 0x14 */ u8 offsetSet;
} JobState;

u32 scrGetArg(u32 index);
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);

/* Script command: stops the job named by the script argument if its state is 1, otherwise sets its offset to -0.25. */
u32 scrCommJobStopOrSetOffset(void)
{
    u32 job = scrGetArg(0);

    if (jobIsValid(job) != 0) {
        JobState *work = (JobState *)jobGetWork(job);

        if (work->state == 1) {
            jobStop(job, 0);
            return 1;
        }
        work->offset = -0.25f;
        work->offsetSet = 1;
    }
    return 1;
}

} /* extern "C" */
