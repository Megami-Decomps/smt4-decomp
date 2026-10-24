/* NON_MATCHING: readable rebuild of the segment sweep against the map collision plane lists; retail keeps the sweep start in s16..s18 and the hit offsets in s22..s24, with the start copy in s26/s28/s29, which armcc here allocates differently. */
#include "gfx/CollisionPlaneView.h"
#include <math.h>

extern "C" {
f32 FUN_0024bb4c(s32 kind, s32 sub, const CollisionPlaneView *plane, f32 x, f32 y, f32 z, f32 margin);

/* Sweeps the segment from `from` toward `to` against the map's two segment plane lists and
 * writes the furthest point it can reach to `out`; returns the index of the last plane that
 * stopped it, or -1 when nothing did (then `out` is `from`). */
s32 FUN_002fcae0(const CollisionVector *from, const CollisionVector *to, CollisionVector *out)
{
    s32 hit = -1;
    f32 x = from->x;
    f32 y = from->y;
    f32 z = from->z;
    for (s32 pass = 1; pass < 3; pass++) {
        CollisionPlaneView *planes;
        s32 count;
        f32 margin;
        if (pass == 1) {
            planes = (CollisionPlaneView *)g_mapCollision.second;
            count = g_mapCollision.segmentCounts[0];
            margin = 8.0f;
            if (hit == -1) {
                /* Start slightly behind `from`, away from `to`. */
                f32 dx = from->x - to->x;
                f32 dy = from->y - to->y;
                f32 dz = from->z - to->z;
                f32 inverse = 1.0f / sqrtf(dx * dx + dy * dy + dz * dz);
                x = from->x + dx * inverse * margin;
                y = from->y + dy * inverse * margin;
                z = from->z + dz * inverse * margin;
            }
        } else {
            planes = (CollisionPlaneView *)g_mapCollision.unk24;
            count = g_mapCollision.segmentCounts[1];
            margin = 5.0f;
        }
        for (s32 i = 0; i < count; i++, planes++) {
            if (!planes->active || !(planes->flags & 1))
                continue;
            f32 startSide = x * planes->normal.x + y * planes->normal.y + z * planes->normal.z - planes->distance;
            f32 endSide = to->x * planes->normal.x + to->y * planes->normal.y + to->z * planes->normal.z - planes->distance;
            if (!((startSide < 0.0f && 0.0f <= endSide) || (endSide < 0.0f && 0.0f <= startSide)))
                continue;
            f32 startDistance = startSide < 0.0f ? -startSide : startSide;
            f32 endDistance = endSide < 0.0f ? -endSide : endSide;
            f32 dx = to->x - x;
            f32 dy = to->y - y;
            f32 dz = to->z - z;
            f32 total = startDistance + endDistance;
            f32 fraction = startDistance / total;
            f32 reach = FUN_0024bb4c(planes->kind, planes->sub, planes, x + dx * fraction, y + dy * fraction,
                                     z + dz * fraction, margin);
            if (0.0f > reach)
                continue;
            f32 along = (startDistance + reach) / total;
            hit = i;
            x += dx * along;
            y += dy * along;
            z += dz * along;
        }
    }
    if (hit == -1) {
        *out = *from;
    } else {
        out->x = x;
        out->y = y;
        out->z = z;
    }
    return hit;
}

} /* extern "C" */
