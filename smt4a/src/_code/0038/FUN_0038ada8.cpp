#include "shard/Shard0038.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern void FUN_00291e50(u32 a, u32 b, u32 c, u32 d);

/* Script command: FUN_00291e50 on arguments 0..3. */
u32 FUN_0038ada8(void)
{
    u32 d = scrGetArg(3);
    u32 c = scrGetArg(2);
    u32 b = scrGetArg(1);
    u32 a = scrGetArg(0);

    FUN_00291e50(a, b, c, d);
    return 1;
}

} /* extern "C" */
