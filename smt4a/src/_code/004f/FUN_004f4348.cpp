#include "shard/W5_W5Match8_CameraTransition.h"
#include "battle/btlCamera.h"

extern "C" {
extern BtlCameraStatics g_btlCamera;
void cameraBeginPositionTransition(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode);
}

static __inline void vec3Clear(W5Match8Vec3 *v)
{
    v->x = v->y = v->z = 0.0f;
}

/* Begin the alternate target transition, delegating to the active camera mode. */
extern "C" void FUN_004f4348(W5Match8CameraTransition *camera, f32 x, f32 y, f32 z, u32 duration, u32 mode)
{
    if (g_btlCamera.routingMode >= 1) {
        cameraBeginPositionTransition(static_cast<W5Match8CameraTransition *>(g_btlCamera.camera), x, y, z, duration, mode);
        return;
    }
    camera->alternateTarget.x = x;
    camera->alternateTarget.y = y;
    camera->alternateTarget.z = z;
    vec3Clear(&camera->alternateProgress);
    camera->alternateMode = mode;
    camera->alternateDuration = duration;
    camera->alternateFrame = 0;
    camera->flags |= 0x2000;
}
