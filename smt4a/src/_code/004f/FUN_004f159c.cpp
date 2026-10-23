/* NON_MATCHING: compiler removes signed-zero arithmetic and fuses scalar look-at expressions; VFP/load scheduling differs. */
#include "shard/W5_W5Match8_CameraTransition.h"
#include <math.h>

extern "C" {
// Apply separate camera/target transitions while preserving the requested look-at distance.
void FUN_004f159c(W5Match8CameraTransition *camera, const W5Match8Vec3 *origin,
                 const W5Match8Vec3 *target, f32 distance)
{
    W5Match8Vec3 *position = &camera->lookAt.position;
    position->x = origin->x + camera->ground.end.x;
    position->y = origin->y + 0.0f;
    position->z = origin->z + camera->ground.end.z;
    f32 dx = target->x - position->x;
    f32 dy = target->y - position->y;
    f32 dz = target->z - position->z;
    f32 inverseLength = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
    W5Match8Vec3 base = *position;
    position->x -= camera->ground.end.x;
    position->y -= 0.0f;
    position->z -= camera->ground.end.z;
    position->x += camera->alternateProgress.x;
    position->y += camera->alternateProgress.y;
    position->z += camera->alternateProgress.z;
    camera->lookAt.target.x = ((dx * inverseLength * distance + base.x) - camera->ground.start.x)
                             + camera->targetProgress.x;
    camera->lookAt.target.y = ((dy * inverseLength * distance + base.y) - 0.0f)
                             + camera->targetProgress.y;
    camera->lookAt.target.z = ((dz * inverseLength * distance + base.z) - camera->ground.start.z)
                             + camera->targetProgress.z;
}
}
