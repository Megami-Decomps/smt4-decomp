/* NON_MATCHING: retail decrements the counts through r1 (the build reuses r0). */
#include "sys/ObjectPool.h"

/* Updates active pool objects and removes inactive objects, maintaining category counts. */
extern "C" void FUN_00396dec(ObjectPool *pool)
{
    if (!(pool->flags & 1)) {
        for (s32 i = 0; i < 32; ++i) {
            PoolObject *object = pool->objects[i];
            if (object != NULL) {
                s32 kind = object->kind;
                if (object->flags & 1) {
                    object->vfunc10();
                } else {
                    object->vfunc04();
                    pool->objects[i] = NULL;
                    if (kind == 0) {
                        --pool->primaryCount;
                    }
                    --pool->count;
                }
            }
        }
    }
}
