#include "common.h"

extern "C" {

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

typedef struct Holder {
    u8 unk00[8];
    u32 handle; /* 0x08 */
} Holder;

typedef struct Actor {
    u32 id;           /* 0x00 */
    Holder *holder;   /* 0x04 */
    u8 unk08[0x88];   /* 0x08 */
    Vec3 positionA;   /* 0x90 */
    Vec3 positionB;   /* 0x9c */
    Vec3 positionC;   /* 0xa8 */
} Actor;

extern void nodeSetTranslation(u32 handle, int slot, Vec3 *position);
extern void FUN_0028c618(u32 handle, int slot, f32 x, f32 y, f32 z);
extern void FUN_0023adf4(u32 handle, int slot, Vec3 *position);
extern void asdMemFreeNonNull(Actor *actor);

void FUN_0034b0e8(Actor *actor, u32 id)
{
    actor->id = id;
    nodeSetTranslation(actor->holder->handle, 0, &actor->positionA);
    FUN_0028c618(actor->holder->handle, 0, actor->positionB.x, actor->positionB.y, actor->positionB.z);
    FUN_0023adf4(actor->holder->handle, 0, &actor->positionC);
    asdMemFreeNonNull(actor);
}

} /* extern "C" */
