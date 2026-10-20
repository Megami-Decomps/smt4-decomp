/* NON_MATCHING: retail tests the sign with `lsrs r0, r0, #31; beq`; the build emits `cmp r0,#0; bge`. */
#include "common.h"

extern "C" {

extern int FUN_00360944(void);
extern int asdFatalError(void);

/* Raises a fatal error when FUN_00360944 reports a failure (negative result). */
void FUN_00360538(void)
{
    int result = FUN_00360944();

    if (result < 0) {
        asdFatalError();
    }
}

} /* extern "C" */
