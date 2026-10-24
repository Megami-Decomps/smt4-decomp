#include "common.h"

class PoolObject {
public:
    virtual ~PoolObject();
    /* 0x04 */ s32 shared;
    /* 0x08 */ u8 flags; // bit 3 = finished
};

struct ObjectPool {
    u8 unk00[0x10];
    s32 count;          // 0x10
    s32 ownedCount;     // 0x14
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

// Delete every finished object in the pool and update the counters.
void FUN_00396a98(ObjectPool *pool)
{
    for (s32 i = 0; i < 32; i++) {
        PoolObject *object = pool->slots[i];
        if (object != NULL && (object->flags & 8) != 0) {
            s32 shared = object->shared;
            delete object;
            pool->slots[i] = NULL;
            pool->forget(shared);
        }
    }
}

} /* extern "C" */
