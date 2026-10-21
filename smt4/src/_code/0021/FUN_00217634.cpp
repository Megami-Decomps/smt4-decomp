/* NON_MATCHING: retail loads x/y together, retains a distinct sum register, and assigns VFP temporaries differently. */
#include "shard/W6_W6Match2_NormalizeVector.h"

extern "C" NormalizedVector DAT_004ea91c;

// Normalize the shared vector when its length is nonzero.
extern "C" void FUN_00217634()
{
    NormalizedVector* vector = &DAT_004ea91c;
    f32 length = sqrtf(vector->x * vector->x + vector->y * vector->y + vector->z * vector->z);
    if (length > 0.0f) {
        vector->x /= length;
        vector->y /= length;
        vector->z /= length;
    }
}
