/* NON_MATCHING: the offset vector is now one local reused for the target (retail keeps its 0.0 y in the stack slot); retail still loads the ground points as words and moves them to VFP, copies the alternate progress to the global with ldm/stm (the build uses vldm/vstm) and schedules the arc stores differently. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include <math.h>

extern "C" {
extern W5Match8Vec3 g_cameraAlternateProgressStart;
void FUN_004f159c(W5Match8CameraTransition* camera, const W5Match8Vec3* adjustment,
                  const W5Match8Vec3* target, f32 distance);

// Start the camera's offset arc from its current planar separation.
void FUN_004f2938(W5Match8CameraTransition* camera, u32 duration, u32 mode, s32 offset,
                  W5Match8Vec3 adjustment)
{
    camera->arc.mode = mode;
    camera->arc.offset = offset;
    camera->arc.duration = duration;
    camera->arc.frame = 0;
    camera->flags |= 0x10000;
    camera->targetStart = camera->targetProgress;
    g_cameraAlternateProgressStart = camera->alternateProgress;
    W5Match8Vec3 start = camera->ground.start;
    W5Match8Vec3 end = camera->ground.end;
    W5Match8Vec3 point;
    point.x = start.x - end.x;
    point.y = 0.0f;
    point.z = start.z - end.z;
    f32 distance = sqrtf(point.x * point.x + point.y * point.y + point.z * point.z);
    point.x = end.x;
    point.y = 0.0f;
    point.z = end.z + (f32)camera->arc.offset;
    FUN_004f159c(camera, &adjustment, &point, distance);
}
}
