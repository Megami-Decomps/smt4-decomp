#include "common.h"

extern "C" {

int dlistFreeAll(void *work);
int asdMemFree(u32 ptr);
extern u32 jobGetWork(void);

void asdListBoxDestroy(void)
{
    u32 work = jobGetWork();

    dlistFreeAll((void *)work);
    asdMemFree(work);
}

} /* extern "C" */
