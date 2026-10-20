#include "common.h"

extern "C" {

typedef struct Job {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[4];
} Job;

s32 jobFind(u32 id);

/* Returns 1 when the job record `*ref` exists and its job is found or it has not started. */
u32 jobRefIsRunning(Job **ref)
{
    s32 found;
    Job *job;

    job = *ref;
    if ((job != NULL) && ((found = jobFind(job->id), found != 0 || (job->unk04 == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
