/* NON_MATCHING: the guard (NodeTransform::hasFlags -> mov/bics) now matches; basis alias reloads and floating normalization/cross-product scheduling differ. */
#include "shard/W4_Match1b_Node.h"
#include <math.h>

extern "C" f32 g_nodeMinimumBasisLengthSquared;

/* Rebuild an orthonormal node basis unless the node preserves its supplied basis. */
extern "C" u32 FUN_0036a33c(NodeTransform *transform)
{
    if (!transform->hasFlags(0x10)) {
        f32 (*m)[4] = transform->m;
        f32 x = m[0][1] * m[1][2] - m[0][2] * m[1][1];
        f32 y = m[0][2] * m[1][0] - m[0][0] * m[1][2];
        f32 z = m[0][0] * m[1][1] - m[0][1] * m[1][0];
        m[2][0] = x;
        m[2][1] = y;
        m[2][2] = z;
        f32 crossLengthSquared = x * x + y * y + z * z;
        f32 firstX = m[0][0], firstY = m[0][1];
        f32 firstLengthSquared = firstX * firstX + firstY * firstY + m[0][2] * m[0][2];
        if (firstLengthSquared < g_nodeMinimumBasisLengthSquared ||
            crossLengthSquared < g_nodeMinimumBasisLengthSquared)
            return 0;
        f32 inverseLength = 1.0f / sqrtf(firstLengthSquared);
        m[0][0] = firstX * inverseLength;
        m[0][1] = firstY * inverseLength;
        m[0][2] *= inverseLength;
        inverseLength = 1.0f / sqrtf(crossLengthSquared);
        x = m[2][0] * inverseLength;
        m[2][0] = x;
        y = m[2][1] * inverseLength;
        m[2][1] = y;
        z = m[2][2] * inverseLength;
        m[2][2] = z;
        m[1][0] = y * m[0][2] - z * m[0][1];
        m[1][1] = z * m[0][0] - x * m[0][2];
        m[1][2] = x * m[0][1] - y * m[0][0];
        transform->flags |= 0x800;
    }
    return 1;
}
