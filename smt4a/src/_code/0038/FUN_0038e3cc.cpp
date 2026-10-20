#include "shard/Shard0038.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_0031f190(s32 a, s32 b);

/* Script command: FUN_0031f190(argN, arg1). */
u32 FUN_0038e3cc(s32 argIndex)
{
    u16 a = scrGetArg(argIndex);
    u16 b = scrGetArg(1);

    FUN_0031f190(a, b);
    return 1;
}

} /* extern "C" */
