#include "shard/Shard0038.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_0035243c(u32 id, u32 value);
extern void FUN_00363c20(void);

/* Script command: FUN_0035243c(arg0, argN), then FUN_00363c20. */
u32 FUN_0038ae30(s32 argIndex)
{
    u32 value = scrGetArg(argIndex);
    u32 id = scrGetArg(0);

    FUN_0035243c(id, value);
    FUN_00363c20();
    return 1;
}

} /* extern "C" */
