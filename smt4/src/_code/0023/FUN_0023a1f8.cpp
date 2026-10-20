/* NON_MATCHING: retail tests the sign with `lsrs r1, r0, #31; moveq r0, #0`; the build emits `cmp r0,#0; movge r0,#0`. */
#include "common.h"

extern "C" {

extern int queryResultFailureOnly(void);

/* Returns the result of queryResultFailureOnly when it is negative, else 0. */
int FUN_0023a1f8(void)
{
    int result = queryResultFailureOnly();

    if (result >= 0) {
        result = 0;
    }
    return result;
}

} /* extern "C" */
