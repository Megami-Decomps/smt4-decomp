#include "addon/aocMain.h"

extern "C" {


s32 jobFind(u32 id);
extern AocJobStateA *g_aocJob;

/* Returns 1 when the job record at 0x57F568 exists and its job is found or it has not started. */
u32 FUN_002b4cb0(void)
{
    AocJobStateA *job;
    s32 found;

    job = g_aocJob;
    if ((g_aocJob != NULL) && ((found = jobFind(g_aocJob->id), found != 0 || (job->started == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
