#include "common.h"

extern "C" {
void scrSetResult(s32 result);
s32 FUN_002b25a4(void);

/* Script command: sets the result to whether FUN_002b25a4 reports anything. */
s32 FUN_00380288(void)
{
    scrSetResult(FUN_002b25a4() != 0);
    return 1;
}
}
