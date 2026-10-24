#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern u32 scrGetArg(u32 index);
extern int jobIsValid(void);

u32 scrComm_Job_Stop2(void)
{
    u32 job = scrGetArg(0);

    if (jobIsValid() != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
