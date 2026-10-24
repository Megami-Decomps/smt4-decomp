/* NON_MATCHING: retail materialises the null result of a failed allocation with moveq r0, r1 (a null-checked pointer conversion); the build branches on the compare instead */
/* Creates the sound-pool instance for type 0x2C: allocates it from the pool next to the owner and fills its defaults. */
#include "common.h"

extern "C" {
/* A pooled instance: only the default-initialised tail is known. */
struct PoolInstance {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ f32 scale;
    /* 0x28 */ u8 enabled;
    /* 0x29 */ u8 unk29;
};

PoolInstance *nw_snd_internal_PoolImpl_AllocImpl(void *pool);

/* `owner` is the second interface of the pool owner, 4 bytes into the object; the pool is at +8 of the object. */
PoolInstance *FUN_0050d504(u8 *owner, u32 type)
{
    u8 *object = owner - 4;
    PoolInstance *instance;

    if (type != 0x2C) {
        return NULL;
    }
    instance = nw_snd_internal_PoolImpl_AllocImpl(object + 8);
    if (instance == NULL) {
        return NULL;
    }
    instance->unk18 = 0;
    instance->unk1c = 0;
    instance->unk20 = 0;
    instance->scale = 0.5f;
    instance->enabled = 1;
    instance->unk29 = 0;
    return instance;
}
}
