#include "common.h"

extern "C" {

s32 jobStop(u32 job, s32 flag);
s32 jobIsValid(u32 job);

typedef struct Task {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 job;
} Task;

/* Stops the job of the task `*ref` if it is valid. */
void taskStopJob(Task **ref)
{
    s32 valid;
    Task *task;

    task = *ref;
    valid = jobIsValid(task->job);
    if (valid != 0) {
        jobStop(task->job, 0);
        return;
    }
}

} /* extern "C" */
