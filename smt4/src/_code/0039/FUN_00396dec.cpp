/* NON_MATCHING: Inactive-object cleanup is placed out of line; vtable/kind loads are combined and count decrements use r0 instead of r1. */
#include "sys/ObjectPool.h"

/* Updates active pool objects and removes inactive objects, maintaining category counts. */
extern "C" void FUN_00396dec(ObjectPool *pool)
{
    if (!(pool->flags & 1)) {
        for (s32 i = 0; i < 32; ++i) {
            PoolObject *object = pool->objects[i];
            if (object != NULL) {
                if (!(object->flags & 1)) {
                    s32 kind = object->kind;
                    object->vfunc04();
                    pool->objects[i] = NULL;
                    if (kind == 0) {
                        pool->primaryCount = pool->primaryCount - 1;
                    }
                    pool->count = pool->count - 1;
                } else {
                    object->vfunc10();
                }
            }
        }
    }
}
