#include "common.h"

extern "C" {

int FUN_00155b74(void *work);
int asdMemFree(u32 ptr);
extern u32 jobGetWork(void);

void FUN_001ff458(void)
{
    u32 work = jobGetWork();

    FUN_00155b74((void *)work);
    asdMemFree(work);
}

} /* extern "C" */
