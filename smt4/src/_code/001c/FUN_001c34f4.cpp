#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern u32 scrGetArg(...);
extern int jobIsValid(u32 job);

u32 FUN_001c34f4(void)
{
    u32 job = scrGetArg();
    int valid = jobIsValid(job);

    if (valid != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
