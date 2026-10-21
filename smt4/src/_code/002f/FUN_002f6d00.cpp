/* NON_MATCHING: compiler reduces the flag test to bic rather than retail's tst and conditional moves. */
#include "common.h"

namespace { struct Battle { u8 padding[0x44a0]; u32 flags; }; }

extern "C" {
/* Reads or updates the requested task state. */
Battle *btlGetMainState(void);
void scrSetResult(s32 result);
u32 FUN_002f6d00(void)
{
    scrSetResult((btlGetMainState()->flags & 2) == 0);
    return 1;
}
}
