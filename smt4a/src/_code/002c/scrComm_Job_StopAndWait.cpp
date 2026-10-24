#include "common.h"

extern "C" {

void asdMdlManagerMarkDestroy(void);
s32 jobIsValid(u32 job);
s32 jobGetWork(u32 job);
u32 scrGetArg(...);
s32 scrGetCommandFrame(void);

typedef struct Task {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 pending;
} Task;

/* Script command: when scrGetCommandFrame reports 0 and the job (script argument) is valid, finishes its task (asdMdlManagerMarkDestroy if it has one pending, then clears the word at 0xC and sets state 3); returns 1 when the job is not valid, 0 otherwise. */
u32 scrComm_Job_StopAndWait(void)
{
    u32 job;
    s32 result;
    Task *task;

    job = scrGetArg(0);
    result = scrGetCommandFrame();
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
            asdMdlManagerMarkDestroy();
        }
        task->unk0C = 0;
        task->state = 3;
    }
    return 0;
}

} /* extern "C" */
