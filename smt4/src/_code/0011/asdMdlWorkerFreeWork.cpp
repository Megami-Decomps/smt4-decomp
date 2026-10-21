#include "common.h"

extern "C" {

extern void *g_asdMdlWorker;
extern void *jobGetWork(u32 job);
extern void asdMemFree(void *memory);

/* Frees the model worker's work area and clears its global pointer. */
void asdMdlWorkerFreeWork(u32 job)
{
    asdMemFree(jobGetWork(job));
    g_asdMdlWorker = NULL;
}

} /* extern "C" */
