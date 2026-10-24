#include "common.h"

extern "C" {

void scrSetResult(s32 result);

/* Script command: reports 0 as the result. */
u32 FUN_0037c75c(void)
{
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
