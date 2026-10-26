#include "common.h"

/* A pooled object: its virtual destructor releases it; `shared` is nonzero when it is not counted as an owner. */
class PoolObject {
public:
    virtual ~PoolObject();
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 shared;
};

struct ObjectPool {
    u8 unk00[0x10];
    s32 count;          // 0x10: live objects
    s32 ownedCount;     // 0x14: live objects that are not shared
    PoolObject *slots[32]; // 0x18

    void forget(s32 shared)
    {
        if (shared == 0) {
            ownedCount--;
        }
        count--;
    }
};

extern "C" {

// Delete every object in the pool and update the counters.
void FUN_00483acc(ObjectPool *pool)
{
    for (s32 i = 0; i < 32; i++) {
        PoolObject *object = pool->slots[i];
        if (object != NULL) {
            s32 shared = object->shared;
            delete object;
            pool->slots[i] = NULL;
            pool->forget(shared);
        }
    }
}

} /* extern "C" */
