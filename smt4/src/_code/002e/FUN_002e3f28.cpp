/* NON_MATCHING: compiler schedules the prologue, loads and argument setup differently from retail. */
#include "common.h"

namespace { struct Battle { u8 padding[0x4968]; s16 first; s16 second; }; }

extern "C" {
Battle *btlGetMainState(void);
void scrSetResult(s32 value);
u32 FUN_002e3f28(void)
{
    s16 value = btlGetMainState()->first;
    s16 other = btlGetMainState()->second;
    if (other > value) { value = other; }
    scrSetResult(value);
    return 1;
}
}
