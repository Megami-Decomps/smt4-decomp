/* NON_MATCHING: frame/ABI/call now match retail (distance passed, one shared Vec3 local); retail loads the four ground floats through core registers (ldr + vmov, int copies of end.x/end.z into the vector) and copies the alternate progress with core ldm/stm, ours uses VFP loads/vldm. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include <math.h>

extern "C" {
extern W5Match8Vec3 g_cameraAlternateProgressStart;
void FUN_004f159c(W5Match8CameraTransition *camera, const W5Match8Vec3 *adjustment,
                  const W5Match8Vec3 *target, f32 distance);

// Start the camera's shifted arc from its current planar separation.
void FUN_004f22a4(W5Match8CameraTransition *camera, u32 duration, u32 mode, W5Match8Vec3 adjustment)
{
    camera->arc.duration = duration;
    camera->arc.frame = 0;
    camera->arc.mode = mode;
    camera->arc.shift = (s32)adjustment.x;
    camera->flags |= 0x10000;
    camera->targetStart = camera->targetProgress;
    g_cameraAlternateProgressStart = camera->alternateProgress;
    W5Match8Vec3 vector = {
        camera->ground.start.x - camera->ground.end.x,
        0.0f,
        camera->ground.start.z - camera->ground.end.z
    };
    f32 distance = sqrtf(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
    vector.x = camera->ground.end.x;
    vector.z = camera->ground.end.z;
    vector.x += (f32)camera->arc.shift * 0.5f;
    vector.z += (f32)camera->arc.offset;
    FUN_004f159c(camera, &adjustment, &vector, distance);
}
}
