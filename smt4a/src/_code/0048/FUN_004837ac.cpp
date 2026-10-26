/* NON_MATCHING: one scheduling difference: retail predicates the kind load (ldreq) after the flag test, this build loads it before the test. */
#include "sys/ObjectPool.h"

static __inline void poolNoteRemoved(ObjectPoolA* pool, s32 kind)
{
    if (kind == 0) {
        --pool->primaryCount;
    }
    --pool->count;
}

// Updates live objects and removes finished objects from the bounded pool.
extern "C" void FUN_004837ac(ObjectPoolA* pool)
{
    if ((pool->flags & 1) == 0) {
        for (s32 index = 0; index < 32; ++index) {
            PoolObjectA* object = pool->objects[index];
            if (object != NULL) {
                s32 kind = object->kind;
                if ((object->flags & 1) != 0) {
                    object->vfunc10();
                } else {
                    object->vfunc04();
                    pool->objects[index] = NULL;
                    poolNoteRemoved(pool, kind);
                }
            }
        }
    }
}
