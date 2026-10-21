#include "common.h"

extern "C" {

extern u32 *g_aocJob;
extern int jobIsValid(u32 job);

u8 aocJobIsValid(void)
{
    if (g_aocJob == NULL) {
        return 0;
    }
    return jobIsValid(*g_aocJob) != 0;
}

} /* extern "C" */
