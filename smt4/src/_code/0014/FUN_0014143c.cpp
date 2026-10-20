#include "common.h"

extern "C" {

extern u32 g_aocMain; /* 0x432fc8 */

extern int FUN_002a6c5c(u32 slot, u32 kind, u32 arg);
extern int FUN_002a6d08(u32 context);

/* Whether the context's check passes and FUN_002a6c5c accepts kind 25 for the two arguments. */
u32 FUN_0014143c(u32 slot, u32 arg)
{
    u32 ok = FUN_002a6d08(g_aocMain);

    if (ok != 0) {
        ok = FUN_002a6c5c(slot, 0x19, arg) != 0;
    }
    return ok;
}

}
