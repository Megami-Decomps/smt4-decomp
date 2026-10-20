/* NON_MATCHING: the two pool-destroy address arguments are computed in the opposite order (r1 before r0 here; r0 first in retail). */
#include "common.h"

extern "C" {

/* Object with a pool at 0x8c over the buffer at 0x90, and a sub-object at 0x60 (this adjustment). */
typedef struct {
    u8 unk00[0x60];
    u8 subObject[0x2c];     /* 0x60 */
    u8 pool[4];             /* 0x8c */
    u8 buffer[0x50];        /* 0x90 */
} PoolOwner;

int FUN_002c66cc(u8 *dest, u8 *source, int size, int flags);
int FUN_0037c7d4(void);
int nw_snd_internal_PoolImpl_DestroyImpl(u8 *pool, u8 *buffer, int size);
u8 *FUN_00235c60(u8 *subObject);

/* Tears the pool down, reloads the 0x50-byte block at 0x235c5c into its buffer, and returns the owner. */
PoolOwner *FUN_0037d604(PoolOwner *self)
{
    FUN_0037c7d4();
    nw_snd_internal_PoolImpl_DestroyImpl(self->pool, self->buffer, 0xa00);
    FUN_002c66cc(self->buffer, (u8 *)0x235c5c, 0x50, 0x20);
    return (PoolOwner *)(FUN_00235c60(self->subObject) - 0x60);
}

} /* extern "C" */
