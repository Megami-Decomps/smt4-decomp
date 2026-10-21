/* NON_MATCHING: compiler removes the initial run-flag reload and hoists the sleep constant across iterations. */
#include "common.h"

extern "C" {
extern u8 DAT_005880d0;
void FUN_00422c48(u32 context);
void FUN_001c76b8();
void svcSleepThread(s64 nanoseconds);

// Pump the worker and sleep briefly until another operation clears its run flag.
void FUN_00422bf0(u32 context)
{
    DAT_005880d0 = 1;
    while (DAT_005880d0 != 0) {
        FUN_00422c48(context);
        FUN_001c76b8();
        svcSleepThread(500000);
    }
}
}
