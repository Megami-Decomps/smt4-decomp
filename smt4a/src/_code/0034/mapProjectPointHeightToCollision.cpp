/* NON_MATCHING: loop-invariant vector differences are hoisted, VFP saved registers and interpolation stores differ; -O2 candidate. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

extern "C" u32 pointInsideTriangleByNormalY(const CollisionVector *, const CollisionVector *, const CollisionVector *, const CollisionVector *, const CollisionVector *);

static __inline f32 planeDistance(const CollisionVector &point, const CollisionQuad &polygon)
{
    return (point.x - polygon.center.x) * polygon.normal.x +
           (point.y - polygon.center.y) * polygon.normal.y +
           (point.z - polygon.center.z) * polygon.normal.z;
}

extern "C" u32 mapProjectPointHeightToCollision(CollisionVector *point)
{
    u32 crossed = 0;
    CollisionVector start = *point;
    CollisionVector end;
    end.x = start.x;
    end.y = -1000.0f;
    end.z = start.z;
    for (s32 kind = 0; kind < 2; ++kind) {
        s32 count;
        CollisionQuad *polygon;
        if (kind == 0) {
            count = g_mapCollision.geometry.triangleCount;
            polygon = g_mapCollision.triangles;
        } else {
            count = g_mapCollision.quadCount;
            polygon = g_mapCollision.quads;
        }
        for (s32 i = 0; i < count; ++i, ++polygon) {
            CollisionVector delta = {end.x - start.x, end.y - start.y, end.z - start.z};
            f32 firstDistance = planeDistance(start, *polygon);
            f32 lastDistance = planeDistance(end, *polygon);
            if (firstDistance * lastDistance < 0.0f) {
                crossed = 1;
                f32 ratio = fabsf(firstDistance / (lastDistance - firstDistance));
                CollisionVector hit = {delta.x * ratio + start.x, delta.y * ratio + start.y, delta.z * ratio + start.z};
                u32 inside;
                if (kind == 1) {
                    inside = pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[1], &polygon->vertices[3]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[3], &polygon->vertices[1]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[1], &polygon->vertices[2], &polygon->vertices[3]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[1], &polygon->vertices[3], &polygon->vertices[2]);
                } else {
                    inside = pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[1], &polygon->vertices[2]);
                }
                if (inside)
                    point->y = hit.y;
            }
        }
    }
    return crossed;
}
