#include "common.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);

extern u32 g_asdMdlWorker;

/* Frees the model manager's block and clears its pointer. */
void asdMdlManagerReleaseBlock(u32 job)
{
    asdMemFree(jobGetWork(job));
    g_asdMdlWorker = 0;
}

} /* extern "C" */
