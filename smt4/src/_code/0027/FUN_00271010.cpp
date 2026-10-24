/* NON_MATCHING: same logic; armcc numbers the registers differently (global address r3/zero r2 vs retail r1/r3) and ends the pending path with beq->bx instead of bxeq lr */
#include "map/DeferredModels.h"

extern "C" {

void FUN_00271064(void);

extern DeferredModelWork *g_deferredMapModels; /* 0x447e58 */

/* Ends a deferred-model update: with `pending` clear, drops the visible flag of every active entry; otherwise runs the pending work. */
void FUN_00271010(u8 pending)
{
    g_deferredMapModels->updating = 0;
    if (pending != 0) {
        if (g_deferredMapModels->pending != 0) {
            FUN_00271064();
        }
    } else {
        s32 i = 0;
        do {
            DeferredModelEntry *entry = &g_deferredMapModels->entries[i];
            if (entry->active != 0) {
                entry->visible = pending;
            }
            i++;
        } while (i < 64);
    }
}

} /* extern "C" */
