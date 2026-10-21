/* NON_MATCHING: inlining hoists common vertex loads across edges and saves extra VFP registers; -O2 candidate. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

static __inline f32 normalizedEdgeY(const CollisionVector &point, const CollisionVector &a, const CollisionVector &b)
{
    CollisionVector edge = { b.x - a.x, b.y - a.y, b.z - a.z };
    CollisionVector offset = { point.x - b.x, point.y - b.y, point.z - b.z };
    CollisionVector cross = {
        edge.y * offset.z - edge.z * offset.y,
        edge.z * offset.x - edge.x * offset.z,
        edge.x * offset.y - edge.y * offset.x
    };
    f32 inverseLength = 1.0f / sqrtf(cross.x * cross.x + cross.y * cross.y + cross.z * cross.z);
    return cross.y * inverseLength;
}

extern "C" u32 pointInsideTriangleByNormalY(const CollisionVector *point, const CollisionVector *normal,
                          const CollisionVector *a, const CollisionVector *b, const CollisionVector *c)
{
    f32 ab = normalizedEdgeY(*point, *a, *b);
    f32 bc = normalizedEdgeY(*point, *b, *c);
    f32 ca = normalizedEdgeY(*point, *c, *a);
    if (normal->y > 0.0f && ab > 0.0f && bc > 0.0f && ca > 0.0f)
        return 1;
    if (normal->y < 0.0f && ab < 0.0f && bc < 0.0f && ca < 0.0f)
        return 1;
    return 0;
}
