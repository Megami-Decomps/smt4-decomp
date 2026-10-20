#include "shard/Shard0033.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern s32 gameFlagsValueGet(s32 value);
extern void scrSetResult(s32 value);

/* Script command: result 0 when the argument is neither 3 nor accepted by gameFlagsValueGet, else 1. */
u32 FUN_00330d7c(s32 argIndex)
{
    s32 value = scrGetArg(argIndex);

    if (gameFlagsValueGet(value) != 3 && gameFlagsValueGet(value) != 0) {
        scrSetResult(0);
        return 1;
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
