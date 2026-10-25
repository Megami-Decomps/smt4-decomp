#include "common.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct JobState {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 phase;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ f32 speed;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u8 stopRequested;
} JobState;

extern u32 scrGetArg(u32 index);
extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);

/* Script command: stops the job in argument 0 when it is in phase 1, otherwise asks it to wind down at -0.25 speed; returns 1. */
s32 scrCommJobWindDown(void)
{
    u32 job = scrGetArg(0);

    if (jobIsValid(job) != 0) {
        JobState *state = (JobState *)jobGetWork(job);

        if (state->phase == 1) {
            jobStop(job, 0);
            return 1;
        }
        state->stopRequested = 1;
        state->speed = -0.25f;
    }
    return 1;
}

} /* extern "C" */
