#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ f32 speed;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u8 active;
} JobWork;

u32 scrGetArg(u32 index);
s32 jobIsValid(void);
JobWork *jobGetWork(u32 job);
int FUN_003bb088(u32 job);
int jobStop(u32 job, s32 arg);

/* Script command: for the job named by the first argument, stops it if its state is 1, otherwise starts it moving at -0.25. */
u32 FUN_0028350c(void)
{
    u32 job = scrGetArg(0);
    JobWork *work;

    if (jobIsValid() != 0) {
        work = jobGetWork(job);
        FUN_003bb088(job);
        if (work->state == 1) {
            jobStop(job, 0);
            return 1;
        }
        work->active = 1;
        work->speed = -0.25f;
    }
    return 1;
}

} /* extern "C" */
