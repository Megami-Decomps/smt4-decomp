#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);
s32 soundPlaySeUnpanned(s32 value);
/* Script command: sets the result to soundPlaySeUnpanned of its first argument. */
s32 FUN_001ab964(void)
{
    scrSetResult(soundPlaySeUnpanned(scrGetArg(0)));
    return 1;
}
}
