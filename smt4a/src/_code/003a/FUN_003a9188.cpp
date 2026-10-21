#include "common.h"

extern "C" {
u32 FUN_002c2658();
void scrSetResult(u32 value);
/* Converts the command timer to a bounded script result. */
s32 FUN_003a9188()
{
    u32 timer = FUN_002c2658();
    scrSetResult(timer >= 3600 ? 1 : 0);
    return 1;
}
}
