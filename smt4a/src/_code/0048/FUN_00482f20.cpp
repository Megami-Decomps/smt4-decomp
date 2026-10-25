/* NON_MATCHING: kind-load predication and release-vtable load scheduling differ. */
#include "map/ControllerPool.h"

static __inline void controllerPoolReleaseSlot(ControllerPool *pool, s32 index)
{
    Controller *controller = pool->slots[index];
    if (controller != NULL) {
        s32 kind = controller->lifecycle.kind;
        controller->vtable->lifetime.release(controller);
        pool->slots[index] = NULL;
        if (kind == 0)
            --pool->firstKindCount;
        --pool->count;
    }
}

// Update active controllers and release every controller that has finished.
extern "C" void FUN_00482f20(ControllerPool *pool)
{
    for (s32 i = 0; i < 32; ++i) {
        Controller *controller = pool->slots[i];
        if (controller != NULL) {
            if ((controller->lifecycle.flags & 1) == 0) {
                controllerPoolReleaseSlot(pool, i);
            } else {
                static_cast<const ControllerLifecycleVtable *>(controller->vtable)->update(controller);
                if ((pool->slots[i]->lifecycle.flags & 1) == 0)
                    controllerPoolReleaseSlot(pool, i);
            }
        }
    }
}
