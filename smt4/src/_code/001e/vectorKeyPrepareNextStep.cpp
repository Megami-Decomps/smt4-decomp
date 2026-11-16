/* NON_MATCHING (b1454): prologue/loop skeleton matches (distance declared first, loop in the else arm of the >= 3 test); the three divisions differ only in VFP load order and register choice. */
#include "shard/W6_W6Match7_VectorKey.h"

extern "C" {
VectorKeyValue *FUN_00200c80(u8 id);

// Find the next later key and calculate its per-frame vector increment.
void vectorKeyPrepareNextStep(VectorKey *keys, s32 *index, s32 *duration, KeyVector *step, KeyVector *target)
{
    s32 distance = 1;
    if (*index >= 3) {
        *index = 4;
    } else {
        for (; *index + distance < 4; ++distance) {
            *duration = keys[*index + distance].frame - keys[*index].frame;
            if (*duration > 0) {
                VectorKeyValue *from = FUN_00200c80(keys[*index].id);
                VectorKeyValue *to = FUN_00200c80(keys[*index + distance].id);
                step->x = (to->position.x - from->position.x) /
                          (keys[*index + distance].frame - keys[*index].frame);
                step->y = (to->position.y - from->position.y) /
                          (keys[*index + distance].frame - keys[*index].frame);
                step->z = (to->position.z - from->position.z) /
                          (keys[*index + distance].frame - keys[*index].frame);
                target->x = to->position.x;
                target->y = to->position.y;
                target->z = to->position.z;
                *index += distance;
                return;
            }
        }
    }
}
}
