#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_003127cc(s32 a, u32 b);

/* Script command: FUN_003127cc(argN, arg1). */
u32 FUN_003a75dc(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    FUN_003127cc(a, b);
    return 1;
}

} /* extern "C" */
