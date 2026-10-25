#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);
void asdCameraInitAreas(void);

extern void *g_event3dOpening;

/* Destroy callback of the opening job: runs its clean-up and frees its block. */
void event3dOpeningDestroy(u32 job)
{
    asdCameraInitAreas();
    jobGetWork(job);
    asdMemFree(g_event3dOpening);
    g_event3dOpening = NULL;
}

} /* extern "C" */
