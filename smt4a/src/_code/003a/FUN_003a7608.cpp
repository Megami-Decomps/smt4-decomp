#include "shard/Shard003A.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_00312870(s32 a, u32 b);

/* Script command: FUN_00312870(argN, arg1). */
u32 FUN_003a7608(s32 argIndex)
{
    u32 a = scrGetArg(argIndex);
    u32 b = scrGetArg(1);

    FUN_00312870(a, b);
    return 1;
}

} /* extern "C" */
