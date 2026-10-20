/* NON_MATCHING: scheduling: retail loads `shared` speculatively (ldrne) before the branch and keeps the decrement temporaries in r1; built loads it after the vtable word */
#include "common.h"

/* A pooled object: slot 1 of its vtable releases it; `shared` is nonzero when it is not counted as an owner. */
class PoolObject {
public:
    virtual void unk00();
    virtual void release();

    u32 unk04;
    s32 shared;     /* 0x08 */
};

typedef struct ObjectPool {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;          /* live objects */
    /* 0x14 */ s32 ownedCount;     /* live objects that are not shared */
    /* 0x18 */ PoolObject *slots[32];
} ObjectPool;

extern "C" {

/* Releases every object in the pool and clears the counts as it goes. */
void FUN_00483acc(ObjectPool *pool)
{
    s32 i;

    for (i = 0; i < 32; i++) {
        PoolObject *object = pool->slots[i];

        if (object != NULL) {
            s32 shared = object->shared;

            object->release();
            pool->slots[i] = NULL;
            if (shared == 0) {
                pool->ownedCount--;
            }
            pool->count--;
        }
    }
}

} /* extern "C" */
