#include "shard/Shard0036.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_00318544(u32 a, u32 b, s32 c, u32 d, u32 e);

/* Script command: FUN_00318544 on four arguments. */
u32 FUN_0036f7b0(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);
    u32 d = scrGetArg(3);

    FUN_00318544(a, b, 0, c, d);
    return 1;
}

} /* extern "C" */
