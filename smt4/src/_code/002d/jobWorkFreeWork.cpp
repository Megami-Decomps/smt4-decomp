#include "common.h"

extern "C" {

int FUN_001ab998(u32 object);
int asdMemFree(u32 *ptr);
extern u32 *jobGetWork(void);

void jobWorkFreeWork(void)
{
    u32 *work = jobGetWork();

    FUN_001ab998(*work);
    if (work != NULL) {
        asdMemFree(work);
        return;
    }
}

} /* extern "C" */
