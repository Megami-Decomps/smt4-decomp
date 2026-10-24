#include "shard/Shard0039.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_00377edc(s32 a, u32 b);

/* Script command: FUN_00377edc(arg0, arg1). */
u32 FUN_0039bbc0(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    FUN_00377edc(a, b);
    return 1;
}

} /* extern "C" */
