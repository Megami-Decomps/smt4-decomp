#include "common.h"

extern "C" {

typedef struct Job {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 started;
} Job;

s32 jobFind(u32 id);
extern Job *DAT_0057f568;

/* Returns 1 when the job record at 0x57F568 exists and its job is found or it has not started. */
u32 FUN_002b4cb0(void)
{
    Job *job;
    s32 found;

    job = DAT_0057f568;
    if ((DAT_0057f568 != NULL) && ((found = jobFind(DAT_0057f568->id), found != 0 || (job->started == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
