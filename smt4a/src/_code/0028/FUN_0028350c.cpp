#include "common.h"

struct JobWork {
    /* 0x00 */ u8 unknown00[0x0C];
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unknown10[0x18];
    /* 0x28 */ f32 speed;
    /* 0x2C */ u8 unknown2C[4];
    /* 0x30 */ u8 active;
};

extern "C" {
u32 scrGetArg(u32 index);
s32 jobIsValid(u32 job);
JobWork* jobGetWork(u32 job);
void eventTexRemoveHandle(u32 job);
void jobStop(u32 job, s32 mode);

u32 FUN_0028350c(void)
{
    u32 job = scrGetArg(0);
    if (jobIsValid(job) != 0) {
        JobWork* work = jobGetWork(job);
        eventTexRemoveHandle(job);
        if (work->state == 1) {
            jobStop(job, 0);
            return 1;
        }
        work->active = 1;
        work->speed = -0.25f;
    }
    return 1;
}
}
