#include "shard/W4_Match3_AocMainA.h"
#include "shard/FUN_0046c4b4.h"

extern "C" {

extern AocMainA *g_aocMain;

extern s32 FUN_001b2d88(u32 a, u32 b, u32 c);
extern s32 FUN_001b3148(AocMainA * main);

/* Returns 1 when FUN_001b3148 passes and FUN_001b2d88(a, 0x1e, b) succeeds. */
u32 FUN_0046c4b4(u32 a, u32 b)
{
    if (FUN_001b3148(g_aocMain) != 0) {
        return FUN_001b2d88(a, 0x1E, b) != 0;
    }
    return 0;
}

} /* extern "C" */
