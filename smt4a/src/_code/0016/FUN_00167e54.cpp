#include "common.h"

extern "C" {

s32 jobIsValid(u32 job);
extern u32 *g_aocJob;

/* Returns whether the job whose id g_aocJob points at is valid (0 when there is none). */
u8 FUN_00167e54(void)
{
    s32 valid;

    if (g_aocJob == NULL) {
        return 0;
    }
    valid = jobIsValid(*g_aocJob);
    return valid != 0;
}

} /* extern "C" */
