#include "common.h"

extern "C" {

void asdFatalError(void);
s32 FUN_003605e8(void);

/* Calls FUN_003605e8 and aborts through asdFatalError when it reports failure. */
void asdResultCheck(void)
{
    bool failed = FUN_003605e8() < 0;
    if (failed) {
        asdFatalError();
    }
}

} /* extern "C" */
