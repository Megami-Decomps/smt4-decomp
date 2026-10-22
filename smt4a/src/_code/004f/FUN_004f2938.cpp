/* NON_MATCHING: vector temporary construction and core/VFP copy scheduling differ from retail. */
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
    W5Match8Vec3 difference = {
        camera->ground.start.x - camera->ground.end.x,
        0.0f,
        camera->ground.start.z - camera->ground.end.z
    };
    f32 distance = sqrtf(difference.x * difference.x + difference.y * difference.y +
                         difference.z * difference.z);
    W5Match8Vec3 target = {
        camera->ground.end.x,
        0.0f,
        camera->ground.end.z + (f32)camera->arc.offset
    };
    FUN_004f159c(camera, &adjustment, &target, distance);
}
}
