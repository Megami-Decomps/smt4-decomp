#include "common.h"

extern "C" {

extern s32 FUN_00360980(void);
extern void asdFatalError(void);

/* Raises the fatal error when FUN_00360980 reports a negative result. */
void resultFatalIfFailed(void)
{
    bool failed = FUN_00360980() < 0;

    if (failed) {
        asdFatalError();
    }
}

} /* extern "C" */
