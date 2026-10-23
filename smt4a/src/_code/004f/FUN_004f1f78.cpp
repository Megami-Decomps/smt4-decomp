/* NON_MATCHING: compiler batches vector loads/stores and uses a transition-relative base instead of retail camera bases. */
#include "battle/btlCamera.h"

extern "C" {
f32 FUN_003d4dd4(u32 mode, s32 duration, s32 frame);

// Ease camera orientation and its offset toward their targets, then stop at the final values.
void FUN_004f1f78(BtlCameraA *camera)
{
    BtlCameraOrientationTransition *transition = &camera->orientation;
    BtlCameraVector3 delta;
    delta.x = transition->target.x - transition->current.x;
    delta.y = transition->target.y - transition->current.y;
    delta.z = transition->target.z - transition->current.z;
    f32 factor = FUN_003d4dd4(transition->mode, transition->duration, transition->frame);
    transition->current.x += delta.x * factor;
    transition->current.y += delta.y * factor;
    transition->current.z += delta.z * factor;
    BtlCameraVector3 offsetDelta;
    offsetDelta.x = transition->targetOffset.x - transition->currentOffset.x;
    offsetDelta.y = transition->targetOffset.y - transition->currentOffset.y;
    offsetDelta.z = transition->targetOffset.z - transition->currentOffset.z;
    transition->currentOffset.x += offsetDelta.x * factor;
    transition->currentOffset.y += offsetDelta.y * factor;
    transition->currentOffset.z += offsetDelta.z * factor;
    ++transition->frame;
    if (transition->frame > transition->duration) {
        transition->current = transition->target;
        transition->currentOffset = transition->targetOffset;
        camera->flags &= ~0x800000;
    }
}
}
