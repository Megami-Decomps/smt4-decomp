/* NON_MATCHING: FP scheduling: retail loads the target with one vldmia, scene components with vldr and the 1.0f constant late */
#include "map/AmbientMovement.h"
#include "map/LmapGlobals.h"
#include <math.h>

extern "C" {

/* Points the velocity from the target toward the map scene position, scaled to the speed. */
void FUN_0039560c(AmbientMovementWork *motion)
{
    const MapVector &target = motion->actor->movement.position;
    f32 speed = motion->speed;
    f32 tx = target.x;
    f32 ty = target.y;
    f32 tz = target.z;
    f32 dx = g_lmapScene->pose.position.x - tx;
    f32 dy = g_lmapScene->pose.position.y - ty;
    f32 dz = g_lmapScene->pose.position.z - tz;
    f32 scale = 1.0f / __sqrtf(dx * dx + dy * dy + dz * dz);

    motion->velocity.x = dx * scale * speed;
    motion->velocity.y = dy * scale * speed;
    motion->velocity.z = dz * scale * speed;
}

} /* extern "C" */
