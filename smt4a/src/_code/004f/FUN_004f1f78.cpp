/* NON_MATCHING: instruction count and structure match (71 rows); the build loads the two operands of each vector difference as whole vectors and in the other order where retail interleaves target/current per component, and allocates the base registers differently. */
#include "battle/btlCamera.h"

extern "C" {
f32 FUN_003d4dd4(u32 mode, s32 duration, s32 frame);

static __inline void copyVector(BtlCameraVector3 *destination, const BtlCameraVector3 *source)
{
    *destination = *source;
}

static __inline void addScaled(BtlCameraVector3 *result, const BtlCameraVector3 *delta, f32 factor)
{
    result->x += delta->x * factor;
    result->y += delta->y * factor;
    result->z += delta->z * factor;
}

static __inline void vectorSubtract(BtlCameraVector3 *result, const BtlCameraVector3 *left, const BtlCameraVector3 *right)
{
    result->x = left->x - right->x;
    result->y = left->y - right->y;
    result->z = left->z - right->z;
}

// Ease camera orientation and its offset toward their targets, then stop at the final values.
void FUN_004f1f78(BtlCameraA *camera)
{
    BtlCameraVector3 delta;
    vectorSubtract(&delta, &camera->orientation.target, &camera->orientation.current);
    f32 factor = FUN_003d4dd4(camera->orientation.mode, camera->orientation.duration, camera->orientation.frame);
    camera->orientation.current.x += delta.x * factor;
    camera->orientation.current.y += delta.y * factor;
    camera->orientation.current.z += delta.z * factor;
    BtlCameraVector3 offsetDelta;
    vectorSubtract(&offsetDelta, &camera->orientation.targetOffset, &camera->orientation.currentOffset);
    addScaled(&camera->orientation.currentOffset, &offsetDelta, factor);
    ++camera->orientation.frame;
    if (camera->orientation.frame > camera->orientation.duration) {
        copyVector(&camera->orientation.current, &camera->orientation.target);
        copyVector(&camera->orientation.currentOffset, &camera->orientation.targetOffset);
        camera->flags &= ~0x800000;
    }
}
}
