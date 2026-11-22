/* NON_MATCHING: the sweep steps through the VEC3 inlines (separate vmul/vadd as retail); retail starts the pass loop at
 * 1 through a skipped pass 0 without the compare, reloads the end point when it backs the start off, and keeps the
 * plane-side compares and the sweep registers (s16-s31, r7-fp) in another assignment. */
#include "gfx/CollisionPlaneView.h"
#include "map/CollisionVectorMath.h"
#include <math.h>

extern "C" {
f32 FUN_0024bb4c(s32 kind, s32 sub, const CollisionPlaneView *plane, f32 x, f32 y, f32 z, f32 margin);

/* Sweeps the segment from `from` toward `to` against the map's two segment plane lists and
 * writes the furthest point it can reach to `out`; returns the index of the last plane that
 * stopped it, or -1 when nothing did (then `out` is `from`). */
s32 mapCollisionSweepSegment(const CollisionVector *from, const CollisionVector *to, CollisionVector *out)
{
    s32 hit = -1;
    CollisionVector current = *from;
    CollisionVector target = *to;
    for (s32 pass = 0; pass < 3; pass++) {
        CollisionPlaneView *planes;
        s32 count;
        f32 margin;
        switch (pass) {
        case 0:
            /* No list is swept in pass 0 (retail keeps its compare). */
            continue;
        case 1:
            planes = (CollisionPlaneView *)g_mapCollision.second;
            count = g_mapCollision.segmentCounts[0];
            margin = 8.0f;
            if (hit == -1) {
                /* Start slightly behind `from`, away from `to`. */
                CollisionVector back;
                collisionVectorSub(&back, from, to);
                collisionVectorNormalize(&back, &back);
                collisionVectorScale(&back, &back, margin);
                collisionVectorAdd(&current, from, &back);
            }
            break;
        default:
            planes = (CollisionPlaneView *)g_mapCollision.unk24;
            count = g_mapCollision.segmentCounts[1];
            margin = 5.0f;
            break;
        }
        for (s32 i = 0; i < count; i++, planes++) {
            if (!planes->active || !(planes->flags & 1))
                continue;
            f32 startSide = collisionVectorDot(&current, &planes->normal) - planes->distance;
            f32 endSide = collisionVectorDot(&target, &planes->normal) - planes->distance;
            if (!((0.0f > startSide && 0.0f <= endSide) || (0.0f > endSide && 0.0f <= startSide)))
                continue;
            f32 startDistance = fabsf(startSide);
            f32 endDistance = fabsf(endSide);
            CollisionVector delta;
            collisionVectorSub(&delta, &target, &current);
            f32 total = startDistance + endDistance;
            CollisionVector point;
            collisionVectorScale(&point, &delta, startDistance / total);
            collisionVectorAdd(&point, &current, &point);
            f32 reach = FUN_0024bb4c(planes->kind, planes->sub, planes, point.x, point.y, point.z, margin);
            if (0.0f > reach)
                continue;
            hit = i;
            collisionVectorScale(&point, &delta, (startDistance + reach) / total);
            collisionVectorAdd(&current, &current, &point);
        }
    }
    if (hit == -1)
        *out = *from;
    else
        *out = current;
    return hit;
}

} /* extern "C" */
