/* NON_MATCHING: the zero y offsets are kept (carried through Vec3 locals) but retail loads the segment words with ldm into core registers and orders the look-at VFP arithmetic differently (90 rows vs 74). */
#include "shard/W5_W5Match8_CameraTransition.h"
#include <math.h>

extern "C" {
// Apply separate camera/target transitions while preserving the requested look-at distance.
void FUN_004f159c(W5Match8CameraTransition *camera, const W5Match8Vec3 *origin,
                 const W5Match8Vec3 *target, f32 distance)
{
    W5Match8Vec3 *position = &camera->lookAt.position;
    W5Match8Vec3 offset = camera->ground.end;
    offset.y = 0.0f;
    W5Match8Vec3 start = camera->ground.start;
    start.y = 0.0f;
    position->x = origin->x + offset.x;
    position->y = origin->y + offset.y;
    position->z = origin->z + offset.z;
    f32 dx = target->x - position->x;
    f32 dy = target->y - position->y;
    f32 dz = target->z - position->z;
    f32 inverseLength = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
    W5Match8Vec3 base = *position;
    position->x -= offset.x;
    position->y -= offset.y;
    position->z -= offset.z;
    position->x += camera->alternateProgress.x;
    position->y += camera->alternateProgress.y;
    position->z += camera->alternateProgress.z;
    camera->lookAt.target.x = ((dx * inverseLength * distance + base.x) - start.x) + camera->targetProgress.x;
    camera->lookAt.target.y = ((dy * inverseLength * distance + base.y) - start.y) + camera->targetProgress.y;
    camera->lookAt.target.z = ((dz * inverseLength * distance + base.z) - start.z) + camera->targetProgress.z;
}
}
