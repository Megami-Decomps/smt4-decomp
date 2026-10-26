/* NON_MATCHING: constructors now are the real Obj55c7b0/Obj55c840 (symbols match); retail copies the kind to r3, keeps the pool in r4 and the slot in r5 and lays both case arms before the common tail, armcc allocates the other way round and places the second arm after it */
#include "classes/Obj55c7b0.h"
#include "classes/Obj55c840.h"
#include "map/ControllerPool.h"

extern "C" {
void callbackCreateControllerForKind(Controller *controller, u32 callback);

/* Creates a controller of the given kind in a free slot of the pool and starts it. Returns it, or NULL when full. */
Controller *FUN_00482b08(ControllerPool *pool, s32 kind, u32 callback)
{
    s32 slot;
    if (pool->count >= 16) {
        return NULL;
    }
    for (slot = 0; slot < 32; slot += 2) {
        if (pool->slots[slot] == NULL) {
            break;
        }
        if (pool->slots[slot + 1] == NULL) {
            slot++;
            break;
        }
    }
    switch (kind) {
    case 0:
        if (pool->firstKindCount >= 4) {
            return NULL;
        }
        pool->slots[slot] = reinterpret_cast<Controller *>(new Obj55c7b0());
        break;
    case 1:
        pool->slots[slot] = reinterpret_cast<Controller *>(new Obj55c840());
        break;
    }
    callbackCreateControllerForKind(pool->slots[slot], callback);
    pool->slots[slot]->vtable->start(pool->slots[slot]);
    pool->slots[slot]->child->vtable->start(pool->slots[slot]->child);
    pool->count++;
    return pool->slots[slot];
}
}
