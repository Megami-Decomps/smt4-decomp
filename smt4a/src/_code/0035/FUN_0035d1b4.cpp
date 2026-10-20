#include "shard/Shard0035.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 FUN_0019f1a4(u32 a, u32 b);
extern void scrSetResult(u32 value);

/* Script command: result is FUN_0019f1a4 of arguments 0 and 1. */
u32 FUN_0035d1b4(s32 argIndex)
{
    u16 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    scrSetResult(FUN_0019f1a4(a, b));
    return 1;
}

} /* extern "C" */
