#include "shard/Shard0035.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_00318544(u32 a, u32 b, s32 c, s32 d, s32 e);

/* Script command: FUN_00318544 on arguments 0 and 1. */
u32 FUN_0035c2ec(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);

    FUN_00318544(a, b, 0, 0, 0);
    return 1;
}

} /* extern "C" */
