#include "common.h"

struct Pool {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 flags;
};

struct PoolOwner {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ Pool pool;
};

struct Object {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ PoolOwner *owner;
};

/* Walks the pool's slots once its flag byte is set; the per-slot work is compiled out of this
 * build, only the counting loop remains. */
extern "C" void FUN_002f2a74(Object *object)
{
    Pool *pool = &object->owner->pool;
    if (pool->flags & 0xFF000000) {
        s32 i = 0;
        while (i < pool->count) {
            i++;
        }
    }
}
