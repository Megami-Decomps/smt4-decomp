/* NON_MATCHING: the first cross product and the final one (nn::math VEC3Cross) schedule as retail; retail reloads the
 * first axis's z while scaling it, copies the matrix pointer into r3 for the last cross and stores it with vstmia (70 lines). */
#include "shard/W4_Match1b_Node.h"
#include <math.h>

extern "C" f32 g_nodeMinimumBasisLengthSquared;

/* nn::math's VEC3Cross (out of line at 0x226210): the product goes through a temporary, so the output may alias an input. */
static __inline NodeVec3 *vec3Cross(NodeVec3 *out, const NodeVec3 *a, const NodeVec3 *b)
{
    NodeVec3 tmp;
    tmp.x = a->y * b->z - a->z * b->y;
    tmp.y = a->z * b->x - a->x * b->z;
    tmp.z = a->x * b->y - a->y * b->x;
    *out = tmp;
    return out;
}

/* nn::math's VEC3Scale (used for both axes below). */
static __inline NodeVec3 *vec3Scale(NodeVec3 *out, const NodeVec3 *v, f32 scale)
{
    out->x = v->x * scale;
    out->y = v->y * scale;
    out->z = v->z * scale;
    return out;
}

/* Rebuild an orthonormal node basis unless the node preserves its supplied basis. */
extern "C" u32 FUN_0036a33c(NodeTransform *transform)
{
    if (!transform->hasFlags(0x10)) {
        NodeVec3 *axisX = (NodeVec3 *)transform->m[0];
        NodeVec3 *axisY = (NodeVec3 *)transform->m[1];
        NodeVec3 *axisZ = (NodeVec3 *)transform->m[2];
        f32 x = axisX->y * axisY->z - axisX->z * axisY->y;
        f32 y = axisX->z * axisY->x - axisX->x * axisY->z;
        f32 z = axisX->x * axisY->y - axisX->y * axisY->x;
        axisZ->x = x;
        axisZ->y = y;
        axisZ->z = z;
        f32 crossLengthSquared = x * x + y * y + z * z;
        f32 axisLengthSquared = axisX->x * axisX->x + axisX->y * axisX->y + axisX->z * axisX->z;
        if (axisLengthSquared < g_nodeMinimumBasisLengthSquared || crossLengthSquared < g_nodeMinimumBasisLengthSquared)
            return 0;
        vec3Scale(axisX, axisX, 1.0f / sqrtf(axisLengthSquared));
        vec3Scale(axisZ, axisZ, 1.0f / sqrtf(crossLengthSquared));
        vec3Cross(axisY, axisZ, axisX);
        transform->flags |= 0x800;
    }
    return 1;
}
