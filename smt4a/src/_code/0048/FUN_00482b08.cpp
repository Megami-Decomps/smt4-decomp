/* NON_MATCHING: only the kind-1 test differs: retail branches `bne tail; b kind1`, armcc here `beq kind1; b tail` (a switch lays the kind-1 arm after the common tail instead). */
#include "classes/Obj55c7b0.h"
#include "classes/Obj55c840.h"
#include "map/ControllerPool.h"

extern "C" {
void callbackCreateControllerForKind(Controller *controller, u32 callback);

/* Creates a controller of the given kind in a free slot of the pool and starts it. Returns it, or NULL when full. */
Controller *FUN_00482b08(ControllerPool *pool, s32 kind, u32 callback)
{
    if (pool->count >= 16) {
        return NULL;
    }
    s32 slot = 0;
    for (; slot < 32; ++slot) {
        if (pool->slots[slot] == NULL)
            break;
    }
    if (kind == 0) {
        if (pool->firstKindCount >= 4) {
            return NULL;
        }
        pool->slots[slot] = reinterpret_cast<Controller *>(new Obj55c7b0());
    } else if (kind == 1) {
        pool->slots[slot] = reinterpret_cast<Controller *>(new Obj55c840());
    }
    callbackCreateControllerForKind(pool->slots[slot], callback);
    pool->slots[slot]->vtable->start(pool->slots[slot]);
    pool->slots[slot]->child->vtable->start(pool->slots[slot]->child);
    pool->count++;
    return pool->slots[slot];
}
}
