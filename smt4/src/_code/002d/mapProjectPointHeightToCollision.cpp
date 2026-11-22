/* NON_MATCHING: retail keeps the start and end points in s12-s17 across the pointInsideTriangleByNormalY calls
 * (a multifile build), where this compile saves them in callee-saved registers; the plane-distance loads and the
 * hit point's stores are scheduled differently as a result. */
#include "map/CollisionVectorMath.h"

extern "C" u32 pointInsideTriangleByNormalY(const CollisionVector *, const CollisionVector *, const CollisionVector *, const CollisionVector *, const CollisionVector *);

/* The signed distance of a point from a polygon's plane. */
static __inline f32 planeDistance(const CollisionVector &point, const CollisionQuad &polygon)
{
    return (point.x - polygon.center.x) * polygon.normal.x +
           (point.y - polygon.center.y) * polygon.normal.y +
           (point.z - polygon.center.z) * polygon.normal.z;
}

/* Drops a vertical segment from the point to y = -1000 through every collision triangle and quad; where it
 * crosses a polygon's plane inside the polygon, the point takes the crossing's height. Returns 1 when the
 * segment crossed any plane. */
extern "C" u32 mapProjectPointHeightToCollision(CollisionVector *point)
{
    u32 crossed = 0;
    CollisionVector start = *point;
    CollisionVector end = start;
    end.y = -1000.0f;
    for (s32 kind = 0; kind < 2; ++kind) {
        s32 count = 0;
        CollisionQuad *polygon = NULL;
        if (kind == 0) {
            count = g_mapCollision.geometry.triangleCount;
            polygon = g_mapCollision.triangles;
        } else if (kind == 1) {
            count = g_mapCollision.quadCount;
            polygon = g_mapCollision.quads;
        }
        for (s32 i = 0; i < count; ++i, ++polygon) {
            CollisionVector hit;
            collisionVectorSub(&hit, &end, &start);
            f32 firstDistance = planeDistance(start, *polygon);
            f32 lastDistance = planeDistance(end, *polygon);
            if (firstDistance * lastDistance < 0.0f) {
                u32 inside;
                crossed = 1;
                f32 ratio = fabsf(firstDistance / (lastDistance - firstDistance));
                collisionVectorScale(&hit, &hit, ratio);
                collisionVectorAdd(&hit, &hit, &start);
                if (kind == 1) {
                    inside = pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[1], &polygon->vertices[3]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[3], &polygon->vertices[1]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[1], &polygon->vertices[2], &polygon->vertices[3]);
                    inside |= pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[1], &polygon->vertices[3], &polygon->vertices[2]);
                } else {
                    inside = pointInsideTriangleByNormalY(&hit, &polygon->normal, &polygon->vertices[0], &polygon->vertices[1], &polygon->vertices[2]);
                }
                if (inside) {
                    point->y = hit.y;
                }
            }
        }
    }
    return crossed;
}
