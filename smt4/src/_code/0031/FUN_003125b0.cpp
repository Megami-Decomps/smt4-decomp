#include "common.h"

extern "C" {
u32 FUN_0025bfa4();
void scrSetResult(u32 value);
/* Converts the command timer to a bounded script result. */
s32 FUN_003125b0()
{
    u32 timer = FUN_0025bfa4();
    scrSetResult(timer >= 3600 ? 1 : 0);
    return 1;
}
}
