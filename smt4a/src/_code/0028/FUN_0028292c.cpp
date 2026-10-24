#include "common.h"

extern "C" {
void scrSetResult(s32 result);
s32 gameDataBlocksGetCounter(void);

/* Script command: sets the result to the data block counter. */
s32 FUN_0028292c(void)
{
    scrSetResult(gameDataBlocksGetCounter());
    return 1;
}
}
