/* NON_MATCHING: 126 lines: retail recomputes (to - from) with separate multiplies and adds (no vmla) and keeps from/to in s16-s21; the loop's buffer selection and the -1 result register differ. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

extern "C" {
f32 FUN_002c2a58(s32 kind, s32 vertexCount, const CollisionQuad *quad,
    f32 x, f32 y, f32 z, f32 tolerance);

/* The point a fraction t of the way from a to b. */
static __inline CollisionVector lerpVector(CollisionVector a, CollisionVector b, f32 t)
{
    CollisionVector out;
    out.x = a.x + (b.x - a.x) * t;
    out.y = a.y + (b.y - a.y) * t;
    out.z = a.z + (b.z - a.z) * t;
    return out;
}

s32 mapCollisionRaySegmentTest(const CollisionVector *start, const CollisionVector *end, CollisionVector *hit)
{
    const CollisionVector from = *start;
    const CollisionVector to = *end;
    /* The queue's four buffer kinds; only the two segment buffers (kinds 2 and 3) are tested. */
    for (s32 group = 0; group < 4; ++group) {
        if (group == 0 || group == 1)
            continue;
        s32 count = group == 2 ? g_mapCollision.segmentCounts[0] : g_mapCollision.segmentCounts[1];
        CollisionQuad *quad = group == 2 ? g_mapCollision.second : g_mapCollision.unk24;
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
                CollisionVector point = lerpVector(from, to, fraction);
                f32 correction = FUN_002c2a58(quad->enabled, static_cast<s8>(quad->vertexCount), quad,
                    point.x, point.y, point.z, 10.0f);
                if (0.0f <= correction) {
                    if (hit != NULL) {
                        fraction = (fabsf(startDistance) + correction) /
                            (fabsf(startDistance) + fabsf(endDistance));
                        *hit = lerpVector(from, to, fraction);
                    }
                    return index;
                }
            }
        }
    }
    return -1;
}
}
