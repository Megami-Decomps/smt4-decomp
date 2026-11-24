/* NON_MATCHING: VFP load scheduling only: retail loads the first two coordinates of the from point with one vldmia (s1-s2) and the third separately; the logic and the two-sided integer compare match. Tried the coordinates in z, x, y order, a Sub/Len vector helper pair and __sqrtf. */
#include "battle/btlCamera.h"
#include <math.h>

extern "C" {

/* Starts the camera's settle mode `mode`; drops the settle flag again when the camera's two points are within 0.01 of each other. */
void btlCameraStartMove(BtlCameraA *camera, u32 mode)
{
    camera->settleMode = mode;
    camera->settleState = 0;
    camera->flags |= 0x80000;
    f32 dx = camera->span.from.x - camera->span.to.x;
    f32 dy = camera->span.from.y - camera->span.to.y;
    f32 dz = camera->span.from.z - camera->span.to.z;
    f32 distance = sqrtf(dx * dx + dy * dy + dz * dz);
    if (distance >= -0.01f && distance <= 0.01f) {
        camera->flags &= ~0x80000;
    }
}

} /* extern "C" */
