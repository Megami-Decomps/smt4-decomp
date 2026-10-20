#include "common.h"

extern "C" {

extern u32 g_aocMain; /* 0x570260 */

extern int FUN_001b2d88(u32 slot, u32 kind, u32 arg);
extern int FUN_001b3148(u32 context);

/* Whether FUN_001b2d88 accepts kind 12 for the arguments (after the context check, when `checkContext` is set). */
u32 FUN_004705ec(u32 slot, u32 arg, s32 checkContext)
{
    u32 ok = 1;

    if (checkContext != 0) {
        ok = FUN_001b3148(g_aocMain);
    }
    if (ok != 0) {
        ok = FUN_001b2d88(slot, 0xC, arg) != 0;
    }
    return ok;
}

}
