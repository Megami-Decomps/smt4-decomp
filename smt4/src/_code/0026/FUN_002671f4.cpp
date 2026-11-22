/* NON_MATCHING: the control flow, calls, constants and most data accesses match; what differs is
 * the inlined three-axis sin/cos sampling (retail serialises the three float->u16 conversions through
 * one VFP register and needs only s0-s15 there, this build converts all three at once and spills into
 * s23/s27/s28, so it saves r4-fp and d8-d14 instead of r4-sl and d8-d13) and, following from that, the
 * stack layout (retail frame 0x108 with the matrix at sp+0, outputs at sp+0x30.., inputs at 0x80, 0x8c,
 * 0xa4, 0xc8, 0xec; this build 0xec). The same rotation inline is unmatched in FUN_0024bfb8 (0x218
 * bytes), the best test bed for it. */
#include "common.h"
#include <math.h>
#include "nw/math/MTX33.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];
/* nn::math::VEC3Transform for a 3x4 matrix: output = matrix * (input, 1). */
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(nw::math::VEC3 *output, const nw::math::MTX34 *matrix,
                                           const nw::math::VEC3 *input);
/* Appends a four-corner quad (corners in order, then its normal) to the collision list. */
void mapCollisionQueueEdgeQuad(u16 tag, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d,
                  CollisionVector normal);
}

/* nn::math MTX34RotXYZFIdx (angles in 1/256 turns): the three table samples run side by side, each
 * wrapped below 65536 first. */
static __forceinline void mtx34RotXYZFIdx(nw::math::MTX34 *out, f32 fIdxX, f32 fIdxY, f32 fIdxZ)
{
    int negX = (fIdxX < 0.0f) ? 1 : 0;
    int negY = (fIdxY < 0.0f) ? 1 : 0;
    int negZ = (fIdxZ < 0.0f) ? 1 : 0;
    f32 absX = fabsf(fIdxX);
    f32 absY = fabsf(fIdxY);
    f32 absZ = fabsf(fIdxZ);
    while (absX >= 65536.0f) {
        absX -= 65536.0f;
    }
    while (absY >= 65536.0f) {
        absY -= 65536.0f;
    }
    while (absZ >= 65536.0f) {
        absZ -= 65536.0f;
    }
    u16 idxX = (u16)absX;
    u16 idxY = (u16)absY;
    u16 idxZ = (u16)absZ;
    f32 rX = absX - (f32)idxX;
    f32 rY = absY - (f32)idxY;
    f32 rZ = absZ - (f32)idxZ;
    const PhaseTrigEntry *entryX = &g_sinCosTable[idxX & 0xff];
    const PhaseTrigEntry *entryY = &g_sinCosTable[idxY & 0xff];
    const PhaseTrigEntry *entryZ = &g_sinCosTable[idxZ & 0xff];
    f32 sinx = entryX->sine + rX * entryX->sineDelta;
    f32 cosx = entryX->cosine + rX * entryX->cosineDelta;
    f32 siny = entryY->sine + rY * entryY->sineDelta;
    f32 cosy = entryY->cosine + rY * entryY->cosineDelta;
    f32 sinz = entryZ->sine + rZ * entryZ->sineDelta;
    f32 cosz = entryZ->cosine + rZ * entryZ->cosineDelta;
    if (negX) {
        sinx = -sinx;
    }
    if (negY) {
        siny = -siny;
    }
    if (negZ) {
        sinz = -sinz;
    }
    f32 f1, f2;

    out->m[0][0] = cosz * cosy;
    out->m[1][0] = sinz * cosy;
    out->m[2][1] = sinx * cosy;
    out->m[2][2] = cosx * cosy;

    f1 = cosx * sinz;
    f2 = sinx * cosz;
    out->m[0][1] = f2 * siny - f1;
    out->m[1][2] = f1 * siny - f2;

    f1 = sinx * sinz;
    f2 = cosx * cosz;
    out->m[0][2] = f2 * siny + f1;
    out->m[1][1] = f1 * siny + f2;
    out->m[2][0] = -siny;

    /* The translation is cleared with integer stores (retail writes a zero core register). */
    *(u32 *)&out->m[0][3] = 0;
    *(u32 *)&out->m[1][3] = 0;
    *(u32 *)&out->m[2][3] = 0;
}

/* The collision quads keep their own vector type; nn::math transforms nw::math::VEC3 in place of it. */
static __inline void transformPoint(CollisionVector *out, const nw::math::MTX34 *matrix, const nw::math::VEC3 *v)
{
    nn_math_ARMv6_VEC3TransformAsm_2AD44C((nw::math::VEC3 *)out, matrix, v);
}

/* Adds the four upright walls of a box to the collision list: a width x depth footprint centred on
 * position, height tall, turned by angle degrees about Y. Each wall is a quad in the XY plane at
 * z = half extent, rotated by angle, angle + 90, + 180 and + 270. */
extern "C" void FUN_002671f4(u16 tag, nw::math::VEC3 position, f32 angle, f32 width, f32 height, f32 depth)
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
    mtx34RotXYZFIdx(&rotation, 0.0f, angle * (256.0f / 360.0f), 0.0f);
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
    mtx34RotXYZFIdx(&rotation, 0.0f, (angle + 90.0f) * (256.0f / 360.0f), 0.0f);
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
    mtx34RotXYZFIdx(&rotation, 0.0f, (angle + 180.0f) * (256.0f / 360.0f), 0.0f);
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
    mtx34RotXYZFIdx(&rotation, 0.0f, (angle + 270.0f) * (256.0f / 360.0f), 0.0f);
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
