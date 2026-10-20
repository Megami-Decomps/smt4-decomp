#include "common.h"

extern "C" {

void *jobGetWork(void);
void asdMemFree(void *block);

extern u32 g_asdMdlWorker;

/* Frees the model manager's block and clears its pointer. */
void asdMdlManagerReleaseBlock(void)
{
    asdMemFree(jobGetWork());
    g_asdMdlWorker = 0;
}

} /* extern "C" */
