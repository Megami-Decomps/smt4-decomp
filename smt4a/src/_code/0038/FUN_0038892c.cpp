#include "shard/Shard0038.h"

extern "C" {

extern void FUN_002c76c0(s32 value);
extern u32 scrGetCommandFrame(void);
extern void FUN_0021bdac(u32 a, s32 b, u32 c, s32 d, s32 e, u32 f);

void FUN_0038892c(u32 a, u32 b)
{
    FUN_002c76c0(0);
    FUN_0021bdac(a, 0, scrGetCommandFrame(), 0x10, 0, b);
}

} /* extern "C" */
