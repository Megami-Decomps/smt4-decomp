/* NON_MATCHING: fast-math folds origin subtraction and combines the final multiply/subtract; retail keeps separate operations. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern f32 sqrtf(f32 value);

/* Orders records by ascending distance from the origin, including their height adjustment. */
s32 FUN_0019d7d4(const DistanceSortRecord *const *left, const DistanceSortRecord *const *right)
{
    const DistanceSortRecord *a = *left;
    const DistanceSortRecord *b = *right;
    f32 az = a->z + a->height * 10.0f;
    f32 bz = b->z + b->height * 10.0f;
    f32 ax = 0.0f - a->x;
    f32 ay = 0.0f - a->y;
    f32 bx = 0.0f - b->x;
    f32 by = 0.0f - b->y;
    az = 0.0f - az;
    bz = 0.0f - bz;
    return (s32)(sqrtf(ax * ax + ay * ay + az * az) * 100.0f -
                 sqrtf(bx * bx + by * by + bz * bz) * 100.0f);
}

} /* extern "C" */
