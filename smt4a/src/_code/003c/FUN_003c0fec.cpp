#include "shard/Shard003C.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_003a288c(s32 a, u32 b);

/* Script command: FUN_003a288c(argN, arg1). */
u32 FUN_003c0fec(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    FUN_003a288c(a, b);
    return 1;
}

} /* extern "C" */
