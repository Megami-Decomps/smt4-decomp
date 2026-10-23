/* NON_MATCHING: collision buffer traversal and float/register scheduling differ. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

extern "C" {
f32 FUN_0024bb4c(s32 kind, s32 vertexCount, const CollisionQuad *quad,
    f32 x, f32 y, f32 z, f32 tolerance);

s32 FUN_0025b4b0(const CollisionVector *start, const CollisionVector *end, CollisionVector *hit)
{
    const CollisionVector from = *start;
    const CollisionVector to = *end;
    for (s32 group = 0; group < 2; ++group) {
        s32 count = g_mapCollision.segmentCounts[group];
        CollisionQuad *quad = group == 0 ? g_mapCollision.second : g_mapCollision.unk24;
        for (s32 index = 0; index < count; ++index, ++quad) {
            if (quad->active == 0)
                continue;
            f32 startDistance = from.x * quad->normal.x + from.y * quad->normal.y +
                from.z * quad->normal.z - quad->distance;
            f32 endDistance = to.x * quad->normal.x + to.y * quad->normal.y +
                to.z * quad->normal.z - quad->distance;
            if ((startDistance < 0.0f && 0.0f <= endDistance) ||
                (endDistance < 0.0f && 0.0f <= startDistance)) {
                f32 fraction = fabsf(startDistance) / (fabsf(startDistance) + fabsf(endDistance));
                f32 correction = FUN_0024bb4c(quad->enabled, static_cast<s8>(quad->vertexCount), quad,
                    from.x + (to.x - from.x) * fraction,
                    from.y + (to.y - from.y) * fraction,
                    from.z + (to.z - from.z) * fraction, 10.0f);
                if (0.0f <= correction) {
                    if (hit != NULL) {
                        fraction = (fabsf(startDistance) + correction) /
                            (fabsf(startDistance) + fabsf(endDistance));
                        hit->z = from.z + (to.z - from.z) * fraction;
                        hit->x = from.x + (to.x - from.x) * fraction;
                        hit->y = from.y + (to.y - from.y) * fraction;
                    }
                    return index;
                }
            }
        }
    }
    return -1;
}
}
