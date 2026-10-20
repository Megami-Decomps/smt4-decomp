#include "common.h"

extern "C" {

void *jobGetWork(u32 job);
void FUN_0040de54(void);

extern void *DAT_005712f0;

void FUN_00369258(u32 job)
{
    jobGetWork(job);
    if (DAT_005712f0 != NULL) {
        FUN_0040de54();
    }
}

} /* extern "C" */
