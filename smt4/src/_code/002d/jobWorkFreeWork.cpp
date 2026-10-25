#include "common.h"

extern "C" {

int FUN_001ab998(u32 object);
int asdMemFree(u32 *ptr);
extern u32 *jobGetWork(u32 job);

void jobWorkFreeWork(u32 job)
{
    u32 *work = jobGetWork(job);

    FUN_001ab998(*work);
    if (work != NULL) {
        asdMemFree(work);
        return;
    }
}

} /* extern "C" */
