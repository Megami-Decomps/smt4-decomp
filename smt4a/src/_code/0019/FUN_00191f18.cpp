#include "shard/W4_Match3_AocMainA.h"

extern "C" {

extern AocMainA *g_aocMain; /* 0x570260 */

extern int FUN_001b2d88(u32 slot, u32 kind, u32 arg);
extern int FUN_001b3148(AocMainA * context);

/* Whether the context's check passes and FUN_001b2d88 accepts kind 25 for the two arguments. */
u32 FUN_00191f18(u32 slot, u32 arg)
{
    u32 ok = FUN_001b3148(g_aocMain);

    if (ok != 0) {
        ok = FUN_001b2d88(slot, 0x19, arg) != 0;
    }
    return ok;
}

}
