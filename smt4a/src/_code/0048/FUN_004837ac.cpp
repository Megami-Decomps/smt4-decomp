/* NON_MATCHING: Pool child deletion and update branches use different register allocation. */
#include "sys/ObjectPool.h"

// Updates live objects and removes finished objects from the bounded pool.
extern "C" void FUN_004837ac(ObjectPoolA* pool)
{
    if ((pool->flags & 1) == 0) {
        for (s32 index = 0; index < 32; ++index) {
            PoolObjectA* object = pool->objects[index];
            if (object != NULL) {
                if ((object->flags & 1) != 0) {
                    object->vfunc10();
                } else {
                    s32 kind = object->kind;
                    object->vfunc04();
                    pool->objects[index] = NULL;
                    if (kind == 0) {
                        --pool->primaryCount;
                    }
                    --pool->count;
                }
            }
        }
    }
}
