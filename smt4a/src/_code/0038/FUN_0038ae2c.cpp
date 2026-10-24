#include "shard/Shard0038.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_0035243c(u32 id, u32 value);
extern void FUN_00363c20(void);

/* Script command: FUN_0035243c(arg0, arg1), then FUN_00363c20. */
u32 FUN_0038ae2c(void)
{
    u32 value = scrGetArg(1);
    u32 id = scrGetArg(0);

    FUN_0035243c(id, value);
    FUN_00363c20();
    return 1;
}

} /* extern "C" */
