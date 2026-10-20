#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern u32 scrGetArg(void);
extern int jobIsValid(void);

u32 FUN_002fe1c4(void)
{
    u32 job = scrGetArg();

    if (jobIsValid() != 0) {
        jobStop(job, 0);
    }
    return 1;
}

} /* extern "C" */
