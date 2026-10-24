#include "shard/Shard0035.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 gameFlagEntryGetBit(u32 a, u32 b);
extern void scrSetResult(u32 value);

/* Script command: result is gameFlagEntryGetBit of arguments 0 and 1. */
u32 scrCommGameFlagEntryGetBit(void)
{
    u16 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    scrSetResult(gameFlagEntryGetBit(a, b));
    return 1;
}

} /* extern "C" */
