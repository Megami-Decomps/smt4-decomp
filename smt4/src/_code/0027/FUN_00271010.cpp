/* NON_MATCHING: retail reaches g_deferredMapModels through a pool word 672 bytes on (after the functions that follow it), keeps the address in r1 (r2 in the build) and returns with bxeq lr where the build branches to its final bx lr. */
#include "map/DeferredModels.h"

extern "C" {

void FUN_00271064(void);

extern DeferredModelWork *g_deferredMapModels; /* 0x447e58 */

/* Ends a deferred-model update: with `pending` clear, drops the visible flag of every active entry; otherwise runs the pending work. */
void FUN_00271010(u8 pending)
{
    g_deferredMapModels->updating = 0;
    if (pending == 0) {
        s32 i = 0;
        do {
            DeferredModelEntry *entry = &g_deferredMapModels->entries[i];
            if (entry->active != 0) {
                entry->visible = pending;
            }
            i++;
        } while (i < 64);
    } else if (g_deferredMapModels->pending != 0) {
        FUN_00271064();
    }
}

} /* extern "C" */
