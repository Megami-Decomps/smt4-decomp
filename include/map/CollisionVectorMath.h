/* nn::math's VEC3 header inlines (the C versions) for collision vectors. A header of their own: <math.h>
 * changes the code of units that declare sqrt themselves. Each operand is read through its pointer, so
 * armcc reloads a component after a store to a local vector it cannot prove apart, as retail does in
 * pointInsideTriangleByNormalY and mapProjectPointHeightToCollision. */
#ifndef MAP_COLLISIONVECTORMATH_H
#define MAP_COLLISIONVECTORMATH_H

#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

static __inline CollisionVector *collisionVectorAdd(CollisionVector *out, const CollisionVector *a,
    const CollisionVector *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
    return out;
}

static __inline CollisionVector *collisionVectorSub(CollisionVector *out, const CollisionVector *a,
    const CollisionVector *b)
{
    out->x = a->x - b->x;
    out->y = a->y - b->y;
    out->z = a->z - b->z;
    return out;
}

static __inline CollisionVector *collisionVectorScale(CollisionVector *out, const CollisionVector *v, f32 scale)
{
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

static __inline f32 collisionVectorDot(const CollisionVector *a, const CollisionVector *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

static __inline CollisionVector *collisionVectorCross(CollisionVector *out, const CollisionVector *a,
    const CollisionVector *b)
{
    CollisionVector tmp;
    tmp.x = a->y * b->z - a->z * b->y;
    tmp.y = a->z * b->x - a->x * b->z;
    tmp.z = a->x * b->y - a->y * b->x;
    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
    return out;
}

static __inline CollisionVector *collisionVectorNormalize(CollisionVector *out, const CollisionVector *v)
{
    f32 scale = 1.0f / sqrtf(collisionVectorDot(v, v));
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

#endif
