#include "common.h"

extern "C" {

void asdMemFree(void *memory);
void dlistFreeAll(void);
u32 jobGetWork(void);

/* Runs dlistFreeAll and frees the job work area. */
void asdListBoxDestroy(void)
{
    u32 work;

    work = jobGetWork();
    dlistFreeAll();
    asdMemFree((void *)work);
}

} /* extern "C" */
