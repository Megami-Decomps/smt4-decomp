#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern u32 scrGetArg(...);
extern int jobIsValid(u32 job);

u32 scrJobStop(void)
{
    u32 job = scrGetArg(0);
    int valid = jobIsValid(job);

    if (valid != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
