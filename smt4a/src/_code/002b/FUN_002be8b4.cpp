#include "common.h"

extern "C" {

void asdMemFree(void *memory);
void FUN_0020209c(void);
u32 jobGetWork(void);

/* Runs FUN_0020209c and frees the job work area. */
void FUN_002be8b4(void)
{
    u32 work;

    work = jobGetWork();
    FUN_0020209c();
    asdMemFree((void *)work);
}

} /* extern "C" */
