#include "common.h"

extern "C" {

extern u32 g_aocMain; /* 0x432fc8 */

extern int FUN_002a6c5c(u32 slot, u32 kind, u32 arg);
extern int FUN_002a6d08(u32 context);

/* Whether FUN_002a6c5c accepts kind 12 for the arguments (after the context check, when `checkContext` is set). */
u32 FUN_0023e330(u32 slot, u32 arg, s32 checkContext)
{
    u32 ok = 1;

    if (checkContext != 0) {
        ok = FUN_002a6d08(g_aocMain);
    }
    if (ok != 0) {
        ok = FUN_002a6c5c(slot, 0xC, arg) != 0;
    }
    return ok;
}

}
