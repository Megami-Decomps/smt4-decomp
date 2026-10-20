#include "common.h"

extern "C" {

int FUN_00152bec(u32 handle);
extern int FUN_002893d8(void);
extern u32 scrGetArg(void);
extern int jobIsValid(u32 job);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 handle;
} JobWork;

extern JobWork *jobGetWork(u32 job);

u32 FUN_0020139c(void)
{
    u32 job = scrGetArg();
    JobWork *work;

    if (FUN_002893d8() != 0) {
        if (jobIsValid(job) == 0) {
            return 1;
        }
    } else {
        if (jobIsValid(job) == 0) {
            return 1;
        }
        work = jobGetWork(job);
        if (work->handle != 0) {
            FUN_00152bec(work->handle);
        }
        work->unk0C = 0;
        work->state = 3;
    }
    return 0;
}

} /* extern "C" */
