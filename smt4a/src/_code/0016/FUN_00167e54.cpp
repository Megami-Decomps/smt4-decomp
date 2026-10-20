#include "common.h"

extern "C" {

s32 jobIsValid(u32 job);
extern u32 *DAT_0057f568;

/* Returns whether the job whose id DAT_0057f568 points at is valid (0 when there is none). */
u8 FUN_00167e54(void)
{
    s32 valid;

    if (DAT_0057f568 == NULL) {
        return 0;
    }
    valid = jobIsValid(*DAT_0057f568);
    return valid != 0;
}

} /* extern "C" */
