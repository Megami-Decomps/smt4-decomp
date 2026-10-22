#include "common.h"

extern "C" {

typedef struct Job {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 unk05[4];
} Job;

s32 jobFind(u32 id);
extern Job *g_requestWork;

/* Returns 1 when the sound-test job is found or has not started. */
u32 jobRefIsRunning(void)
{
    s32 found;
    Job *job;

    job = g_requestWork;
    if ((job != NULL) && ((found = jobFind(job->id), found != 0 || (job->unk04 == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
