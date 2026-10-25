/* NON_MATCHING: loop shape matches; retail keeps the pool pointer in r0 and returns it unchanged (uninitialised counter) when the flag byte is clear, the build allocates the pool in r1. */
#include "common.h"

struct Pool {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 flags;
};

struct Object {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 *owner;
};

/* Walks the pool's slots once its flag byte is set (the per-slot work is gone from this build). */
extern "C" s32 FUN_002f2a74(Object *object)
{
    Pool *pool = (Pool *)(object->owner + 0xC0);
    s32 i;

    if (pool->flags & 0xFF000000) {
        i = 0;
        while (i < pool->count) {
            i++;
        }
    }
    return i;
}
