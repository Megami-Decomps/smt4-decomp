#include "shard/Shard0041.h"

extern "C" {

extern void FUN_00418cfc(s32 a, s32 b, s32 c, u32 d, u32 e, u32 f, u32 g, s32 h, s32 i);

void FUN_00418fe0(u32 a, u32 b, u32 c, u32 d)
{
    FUN_00418cfc(0, 0x6752, 0x1401, a, b, c, d, 1, 0);
}

} /* extern "C" */
