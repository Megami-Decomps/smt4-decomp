/* NON_MATCHING: sentinel-loop setup is not predicated like retail, and the three divisions use different VFP operand registers and load ordering. */
#include "shard/W6_W6Match7_VectorKey.h"

extern "C" {
VectorKeyValue *FUN_002c17c0(u8 id);

// Find the next later key and calculate its per-frame vector increment.
void vectorKeyPrepareNextStep(VectorKey *keys, s32 *index, s32 *duration, KeyVector *step, KeyVector *target)
{
    if (*index >= 3)
        *index = 4;
    for (s32 distance = 1; *index + distance < 4; ++distance) {
        *duration = keys[*index + distance].frame - keys[*index].frame;
        if (*duration > 0) {
            VectorKeyValue *from = FUN_002c17c0(keys[*index].id);
            VectorKeyValue *to = FUN_002c17c0(keys[*index + distance].id);
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
