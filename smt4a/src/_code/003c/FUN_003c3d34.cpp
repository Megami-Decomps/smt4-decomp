#include "shard/Shard003C.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_003ae110(s32 a, u32 b, u32 c, u32 d);

/* Script command: FUN_003ae110 on arguments 0..3. */
u32 FUN_003c3d34(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);
    u32 d = scrGetArg(3);

    FUN_003ae110(a, b, c, d);
    return 1;
}

} /* extern "C" */
