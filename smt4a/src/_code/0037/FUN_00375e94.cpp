/* NON_MATCHING: retail runs an empty counting loop over the slots that falls off the end without a return value when the flag byte is clear (r0 keeps the pool pointer); retail keeps the pool pointer in r0 and branches, the build predicates. */
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
extern "C" s32 FUN_00375e94(Object *object)
{
    Pool *pool = (Pool *)(object->owner + 0xC0);
    s32 i = 0;

    if (pool->flags & 0xFF000000) {
        for (i = 0; i < pool->count; i++) {
        }
    }
    return i;
}
