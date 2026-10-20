#include "shard/Shard003B.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_003b9550(u32 a, u32 b);

/* Script command: FUN_003b9550(argN, arg1). */
u32 FUN_003b6cdc(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    FUN_003b9550(a, b);
    return 1;
}

} /* extern "C" */
