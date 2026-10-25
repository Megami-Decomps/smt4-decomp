/* NON_MATCHING: controller kind loads after the null branch instead of predicated before it; count decrements use r0 instead of r1. */
#include "map/ControllerPool.h"

extern "C" {

/* Release every controller, retaining its kind before the release invalidates it. */
void FUN_001927c0(ControllerPool *pool)
{
    s32 i = 0;

    do {
        Controller *slot = pool->slots[i];

        if (slot != NULL) {
            s32 kind = slot->lifecycle.kind;

            slot->vtable->lifetime.release(slot);
            pool->slots[i] = NULL;
            if (kind == 0) {
                pool->firstKindCount--;
            }
            pool->count--;
        }
        i++;
    } while (i < 32);
}

} /* extern "C" */
