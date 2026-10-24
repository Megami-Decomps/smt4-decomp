/* NON_MATCHING: VFP load scheduling only: retail loads the first two coordinates of the from point with one vldmia (s1-s2) and the third separately; the logic, the two-sided integer compare and the flag pointer match. */
#include "battle/btlCamera.h"
#include <math.h>

extern "C" {

/* Starts the camera's settle mode `mode`; drops the settle flag again when the camera's two points are within 0.01 of each other. */
void FUN_004f1c5c(BtlCameraA *camera, u32 mode)
{
    camera->settleMode = mode;
    camera->settleState = 0;
    u32 *flagsPointer = &camera->flags;
    u32 flags = *flagsPointer;
    *flagsPointer = flags | 0x80000;
    f32 dx = camera->span.from.x - camera->span.to.x;
    f32 dy = camera->span.from.y - camera->span.to.y;
    f32 dz = camera->span.from.z - camera->span.to.z;
    f32 distance = sqrtf(dx * dx + dy * dy + dz * dz);
    if (distance >= -0.01f && distance <= 0.01f) {
        *flagsPointer = flags & ~0x80000;
    }
}

} /* extern "C" */
