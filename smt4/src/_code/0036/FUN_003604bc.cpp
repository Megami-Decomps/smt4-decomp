/* Calls asdFatalError when FUN_0036083c reports failure (negative result). */
#include "common.h"

extern "C" {

void asdFatalError(void);
s32 FUN_0036083c(void);

void FUN_003604bc(void)
{
    bool failed = FUN_0036083c() < 0;

    if (failed) {
        asdFatalError();
    }
}

} /* extern "C" */
