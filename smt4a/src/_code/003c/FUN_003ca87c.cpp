#include "shard/Shard003C.h"

extern "C" {

extern void FUN_001835b4(s32 a, s32 b, s32 c, u32 d, u32 e, u32 f);

void FUN_003ca87c(u32 a, u32 b, u32 c)
{
    FUN_001835b4(2, 0x1B, 1000, a, b, c);
}

} /* extern "C" */
