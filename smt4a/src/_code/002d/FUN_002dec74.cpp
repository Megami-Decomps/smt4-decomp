#include "common.h"

extern "C" {

void dialogClose(s32 flag);
s32 jobStop(u32 job, s32 flag);
s32 jobIsValid(u32 job);
s32 dialogIsActive(void);

typedef struct Task {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 job;
} Task;
Task *jobGetWork(void);

/* Stops the task's job if it is valid, first running dialogClose(1) when dialogIsActive allows it. */
void FUN_002dec74(void)
{
    Task *task;
    s32 result;

    task = jobGetWork();
    result = jobIsValid(task->job);
    if (result == 0) {
        return;
    }
    result = dialogIsActive();
    if (result != 0) {
        dialogClose(1);
    }
    jobStop(task->job, 0);
}

} /* extern "C" */
