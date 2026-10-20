#include "common.h"

extern "C" {

void asdMemFree(void *block);
void *jobGetWork(u32 job);
void asdWorkAreaReset(void);

extern void *g_event3dOpening;

/* Destroy callback of the opening job: runs its clean-up and frees its block. */
void event3dOpeningDestroy(u32 job)
{
    asdWorkAreaReset();
    jobGetWork(job);
    asdMemFree(g_event3dOpening);
    g_event3dOpening = NULL;
}

} /* extern "C" */
