#include "shard/W4_Match3_AocMainA.h"
#include "shard/FUN_0046ebf0.h"

extern "C" {

extern AocMainA *g_aocMain;

s32 FUN_001b3148(AocMainA * main);
s32 FUN_001b2d88(u32 arg0, u32 arg1, u32 arg2);

/* Returns 1 when FUN_001b3148 succeeds on the add-on main object and FUN_001b2d88(arg0, 0x39, arg1) succeeds too. */
u32 FUN_0046ebf0(u32 arg0, u32 arg1)
{
    if (FUN_001b3148(g_aocMain) != 0) {
        return FUN_001b2d88(arg0, 0x39, arg1) != 0;
    }
    return 0;
}

} /* extern "C" */
