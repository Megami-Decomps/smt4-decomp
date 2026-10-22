#include "battle/btlReflect.h"
extern "C" {

void *jobGetWork(u32 job);
void FUN_0040de54(void);



void FUN_00369258(u32 job)
{
    jobGetWork(job);
    if (g_btlActionReflect != NULL) {
        FUN_0040de54();
    }
}

} /* extern "C" */
