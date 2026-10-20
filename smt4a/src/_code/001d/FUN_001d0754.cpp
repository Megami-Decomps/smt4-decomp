/* NON_MATCHING: instruction order only: retail keeps the stores in source order (result, self links, then head = next), build hoists the load of `next` and the zero. */
#include "common.h"
#include "shard/S3JobQueue.h"

extern "C" {

JobManager *FUN_001b1998(void);
void FUN_001d0788(JobManager *manager, JobNode *node, s32 priority);

/* Resets a job and hands it to the job manager at priority 1 (the function that follows). */
void FUN_001d0754(Job *job)
{
    job->result = 0;
    job->self0 = job;
    job->self1 = job;
    job->head = job->next;
    FUN_001d0788(FUN_001b1998(), &job->node, 1);
}

} /* extern "C" */
