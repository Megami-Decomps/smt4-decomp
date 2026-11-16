/* NON_MATCHING: head now matches (`s32 distance = 1` + `if (*index < 3) {...} else *index = 4`); remaining: the three divisions load the from/to components in the other order and use other VFP temporaries */
#include "shard/W6_W6Match7_VectorKey.h"
#include "code/Code002c.h"

extern "C" {

// Find the next later key and calculate its per-frame vector increment.
void vectorKeyPrepareNextStep(VectorKey *keys, s32 *index, s32 *duration, KeyVector *step, KeyVector *target)
{
    s32 distance = 1;
    if (*index < 3) {
        for (; *index + distance < 4; ++distance) {
            *duration = keys[*index + distance].frame - keys[*index].frame;
            if (*duration > 0) {
                VectorKeyValue *from = reinterpret_cast<VectorKeyValue *>(FUN_002c17c0(keys[*index].id));
                VectorKeyValue *to = reinterpret_cast<VectorKeyValue *>(FUN_002c17c0(keys[*index + distance].id));
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
    } else {
        *index = 4;
    }
}
}
