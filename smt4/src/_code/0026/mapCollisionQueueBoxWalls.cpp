/* NON_MATCHING: the control flow, calls, constants, the saved registers (r4-sl, d8-d13) and the 0x108 frame
 * with the matrix at sp+0, the transformed points at sp+0x30.. and the normal at sp+0x80 are retail's (402 raw /
 * 398 shape rows). What differs: the four corner inputs sit in other slots (retail 0x8c, 0xc8, 0xec, 0xa4), and
 * inside nn::math's inlined MTX34RotXYZFIdx the table loads and the rotation products are scheduled through
 * other VFP registers. */
#include "common.h"
#include <math.h>
#include "nw/math/MTX33.h"
#include "nn/math/MTX34RotXYZFIdx.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
/* nn::math::VEC3Transform for a 3x4 matrix: output = matrix * (input, 1). */
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
/* Appends a four-corner quad (corners in order, then its normal) to the collision list. */
void mapCollisionQueueEdgeQuad(u16 tag, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d,
                  CollisionVector normal);
}

/* The collision quads keep their own vector type; nn::math transforms nw::math::VEC3 in place of it. */
static __inline void transformPoint(CollisionVector *out, const nw::math::MTX34 *matrix, const nw::math::VEC3 *v)
{
    nn_math_ARMv6_VEC3TransformAsm_2AD44C((nw::math::VEC3 *)out, matrix, v);
}

/* Adds the four upright walls of a box to the collision list: a width x depth footprint centred on
 * position, height tall, turned by angle degrees about Y. Each wall is a quad in the XY plane at
 * z = half extent, rotated by angle, angle + 90, + 180 and + 270. */
extern "C" void mapCollisionQueueBoxWalls(nw::math::VEC3 position, f32 angle, f32 width, u16 tag, f32 height, f32 depth)
{
    CollisionVector p0, p1, p2, p3, n;
    nw::math::VEC3 corner0, corner1, corner2, corner3, normal;
    nw::math::MTX34 rotation;
    f32 halfWidth = width * 0.5f;
    f32 halfDepth = depth * 0.5f;

    corner0.x = -halfWidth;
    corner0.y = 0.0f;
    corner0.z = halfDepth;
    corner1.x = halfWidth;
    corner1.y = 0.0f;
    corner1.z = halfDepth;
    corner2.x = halfWidth;
    corner2.y = height;
    corner2.z = halfDepth;
    corner3.x = -halfWidth;
    corner3.y = height;
    corner3.z = halfDepth;
    normal.x = 0.0f;
    normal.y = 0.0f;
    normal.z = 1.0f;
    nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, angle * (256.0f / 360.0f), 0.0f);
    transformPoint(&p0, &rotation, &corner0);
    transformPoint(&p1, &rotation, &corner1);
    transformPoint(&p2, &rotation, &corner2);
    transformPoint(&p3, &rotation, &corner3);
    transformPoint(&n, &rotation, &normal);
    p0.x += position.x;
    p0.y += position.y;
    p0.z += position.z;
    p1.x += position.x;
    p1.y += position.y;
    p1.z += position.z;
    p2.x += position.x;
    p2.y += position.y;
    p2.z += position.z;
    p3.x += position.x;
    p3.y += position.y;
    p3.z += position.z;
    mapCollisionQueueEdgeQuad(tag, p0, p1, p2, p3, n);

    corner0.x = -halfDepth;
    corner0.y = 0.0f;
    corner0.z = halfWidth;
    corner1.x = halfDepth;
    corner1.y = 0.0f;
    corner1.z = halfWidth;
    corner2.x = halfDepth;
    corner2.y = height;
    corner2.z = halfWidth;
    corner3.x = -halfDepth;
    corner3.y = height;
    corner3.z = halfWidth;
    normal.x = 0.0f;
    normal.y = 0.0f;
    normal.z = 1.0f;
    nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, (angle + 90.0f) * (256.0f / 360.0f), 0.0f);
    transformPoint(&p0, &rotation, &corner0);
    transformPoint(&p1, &rotation, &corner1);
    transformPoint(&p2, &rotation, &corner2);
    transformPoint(&p3, &rotation, &corner3);
    transformPoint(&n, &rotation, &normal);
    p0.x += position.x;
    p0.y += position.y;
    p0.z += position.z;
    p1.x += position.x;
    p1.y += position.y;
    p1.z += position.z;
    p2.x += position.x;
    p2.y += position.y;
    p2.z += position.z;
    p3.x += position.x;
    p3.y += position.y;
    p3.z += position.z;
    mapCollisionQueueEdgeQuad(tag, p0, p1, p2, p3, n);

    corner0.x = -halfWidth;
    corner0.y = 0.0f;
    corner0.z = halfDepth;
    corner1.x = halfWidth;
    corner1.y = 0.0f;
    corner1.z = halfDepth;
    corner2.x = halfWidth;
    corner2.y = height;
    corner2.z = halfDepth;
    corner3.x = -halfWidth;
    corner3.y = height;
    corner3.z = halfDepth;
    normal.x = 0.0f;
    normal.y = 0.0f;
    normal.z = 1.0f;
    nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, (angle + 180.0f) * (256.0f / 360.0f), 0.0f);
    transformPoint(&p0, &rotation, &corner0);
    transformPoint(&p1, &rotation, &corner1);
    transformPoint(&p2, &rotation, &corner2);
    transformPoint(&p3, &rotation, &corner3);
    transformPoint(&n, &rotation, &normal);
    p0.x += position.x;
    p0.y += position.y;
    p0.z += position.z;
    p1.x += position.x;
    p1.y += position.y;
    p1.z += position.z;
    p2.x += position.x;
    p2.y += position.y;
    p2.z += position.z;
    p3.x += position.x;
    p3.y += position.y;
    p3.z += position.z;
    mapCollisionQueueEdgeQuad(tag, p0, p1, p2, p3, n);

    corner0.x = -halfDepth;
    corner0.y = 0.0f;
    corner0.z = halfWidth;
    corner1.x = halfDepth;
    corner1.y = 0.0f;
    corner1.z = halfWidth;
    corner2.x = halfDepth;
    corner2.y = height;
    corner2.z = halfWidth;
    corner3.x = -halfDepth;
    corner3.y = height;
    corner3.z = halfWidth;
    normal.x = 0.0f;
    normal.y = 0.0f;
    normal.z = 1.0f;
    nw::math::MTX34RotXYZFIdx(&rotation, 0.0f, (angle + 270.0f) * (256.0f / 360.0f), 0.0f);
    transformPoint(&p0, &rotation, &corner0);
    transformPoint(&p1, &rotation, &corner1);
    transformPoint(&p2, &rotation, &corner2);
    transformPoint(&p3, &rotation, &corner3);
    transformPoint(&n, &rotation, &normal);
    p0.x += position.x;
    p0.y += position.y;
    p0.z += position.z;
    p1.x += position.x;
    p1.y += position.y;
    p1.z += position.z;
    p2.x += position.x;
    p2.y += position.y;
    p2.z += position.z;
    p3.x += position.x;
    p3.y += position.y;
    p3.z += position.z;
    mapCollisionQueueEdgeQuad(tag, p0, p1, p2, p3, n);
}
