#include "common.h"

extern "C" {

void FUN_00280d2c(void);
s32 jobIsValid(u32 job);
s32 jobGetWork(u32 job);
u32 scrGetArg(...);
s32 FUN_002deb84(void);

typedef struct Task {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 pending;
} Task;

/* Script command: when FUN_002deb84 reports 0 and the job (script argument) is valid, finishes its task (FUN_00280d2c if it has one pending, then clears the word at 0xC and sets state 3); returns 1 when the job is not valid, 0 otherwise. */
u32 FUN_002c1f48(void)
{
    u32 job;
    s32 result;
    Task *task;

    job = scrGetArg();
    result = FUN_002deb84();
    if (result != 0) {
        result = jobIsValid(job);
        if (result == 0) {
            return 1;
        }
    } else {
        result = jobIsValid(job);
        if (result == 0) {
            return 1;
        }
        task = (Task *)jobGetWork(job);
        if (task->pending != 0) {
            FUN_00280d2c();
        }
        task->unk0C = 0;
        task->state = 3;
    }
    return 0;
}

} /* extern "C" */
