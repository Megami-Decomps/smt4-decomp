/* NON_MATCHING: the VEC3 inlines give retail's reloads, but the edge and offset subtractions are scheduled in
 * another order and use other VFP registers. */
#include "map/CollisionVectorMath.h"

/* Tests whether a point lies inside a triangle seen along Y: the Y components of the three edge normals
 * (edge x (point - edge end), normalised) must all share the sign of the face normal's Y. */
extern "C" u32 pointInsideTriangleByNormalY(const CollisionVector *point, const CollisionVector *normal,
                          const CollisionVector *a, const CollisionVector *b, const CollisionVector *c)
{
    CollisionVector edge;
    CollisionVector offset;
    CollisionVector cross;

    collisionVectorSub(&edge, b, a);
    collisionVectorSub(&offset, point, b);
    collisionVectorCross(&cross, &edge, &offset);
    collisionVectorNormalize(&cross, &cross);
    f32 ab = cross.y;
    collisionVectorSub(&edge, c, b);
    collisionVectorSub(&offset, point, c);
    collisionVectorCross(&cross, &edge, &offset);
    collisionVectorNormalize(&cross, &cross);
    f32 bc = cross.y;
    collisionVectorSub(&edge, a, c);
    collisionVectorSub(&offset, point, a);
    collisionVectorCross(&cross, &edge, &offset);
    collisionVectorNormalize(&cross, &cross);
    f32 ca = cross.y;
    if (normal->y > 0.0f && ab > 0.0f && bc > 0.0f && ca > 0.0f)
        return 1;
    if (normal->y < 0.0f && ab < 0.0f && bc < 0.0f && ca < 0.0f)
        return 1;
    return 0;
}
