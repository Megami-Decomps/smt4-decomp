#include "common.h"

extern "C" {

typedef struct Job {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[5];
    /* 0x09 */ u8 started;
} Job;

s32 jobFind(u32 id);

extern Job *g_clearSave;

/* Returns 1 when the clear-save job exists and its job is found or it has not started. */
u32 workerIsRunning(void)
{
    s32 found;
    Job *job;

    job = g_clearSave;
    if ((job != NULL) && ((found = jobFind(job->id), found != 0 || (job->started == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
