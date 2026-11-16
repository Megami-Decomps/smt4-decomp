#include "sys/ObjectPool.h"

/* Counts a removed object out of the pool, and out of the primary count for kind 0. */
static __inline void poolNoteRemoved(ObjectPool *pool, s32 kind)
{
    if (kind == 0) {
        --pool->primaryCount;
    }
    --pool->count;
}

/* Updates active pool objects and deletes finished ones, maintaining the pool's counts. */
extern "C" void FUN_00396dec(ObjectPool *pool)
{
    if ((pool->flags & 1) == 0) {
        for (s32 index = 0; index < 32; ++index) {
            PoolObject *object = pool->objects[index];
            if (object != NULL) {
                if ((object->flags & 1) != 0) {
                    object->vfunc10();
                } else {
                    s32 kind = object->kind;
                    delete object;
                    pool->objects[index] = NULL;
                    poolNoteRemoved(pool, kind);
                }
            }
        }
    }
}
