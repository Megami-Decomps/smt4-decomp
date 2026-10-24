/* NON_MATCHING: only FP load scheduling differs (retail loads from.x/from.y with one vldmia and from.z separately; built pairs from.y/from.z) */
#include "common.h"
#include <math.h>

struct Position {
    f32 x, y, z;
};

struct MovingObject {
    u8 unk00[4];       // 0x00
    u32 unk04;         // 0x04
    u8 unk08[4];       // 0x08
    Position from;     // 0x0C
    Position to;       // 0x18
    u8 unk24[0x610];   // 0x24
    u32 flags;         // 0x634
    u8 unk638[0xF0];   // 0x638
    u32 unk728;        // 0x728
    u32 unk72C;        // 0x72C
};

extern "C" {

/* Records the new value, flags the object as moving and clears the flag again when it is within 0.01 of its target. */
void FUN_0024082c(MovingObject *object, u32 value)
{
    object->unk72C = value;
    object->unk728 = 0;
    object->flags |= 0x80000;

    f32 dz = object->from.z - object->to.z;
    f32 dx = object->from.x - object->to.x;
    f32 dy = object->from.y - object->to.y;
    f32 distance = sqrtf(dx * dx + dy * dy + dz * dz);

    if (distance >= -0.01f && distance <= 0.01f) {
        object->flags &= ~0x80000;
    }
}

} /* extern "C" */
