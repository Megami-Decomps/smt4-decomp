/* NON_MATCHING: -O2 candidate; products/registers differ, while row values and entry flags stay cached instead of retail's reloads. */
#include "shard/W4_Match1b_Node.h"

extern "C" const f32 g_nodeMinimumBasisLengthSquared;

namespace {
inline f32 rowLengthSquared(const f32* row)
{
    return row[0] * row[0] + row[1] * row[1] + row[2] * row[2];
}
}

// Quaternion storage uses the first four non-translation matrix entries.
extern "C" u32 nw_gfx_CalculatedTransform_ConvertQuaternionToMatrix(NodeTransform* transform)
{
    if ((~transform->flags & 0x10) != 0) {
        const f32 x = transform->m[0][0];
        const f32 y = transform->m[0][1];
        const f32 z = transform->m[0][2];
        const f32 w = transform->m[1][0];
        const f32 scale = 2.0f / (x * x + y * y + z * z + w * w);
        const f32 xs = x * scale;
        const f32 ys = y * scale;
        const f32 zs = z * scale;
        const f32 xx = x * xs;
        const f32 yy = y * ys;
        const f32 zz = z * zs;
        const f32 xy = x * ys;
        const f32 xz = x * zs;
        const f32 yz = y * zs;
        const f32 wx = w * xs;
        const f32 wy = w * ys;
        const f32 wz = w * zs;
        transform->m[0][0] = 1.0f - (yy + zz);
        transform->m[0][1] = xy - wz;
        transform->m[0][2] = xz + wy;
        transform->m[1][0] = xy + wz;
        transform->m[1][1] = 1.0f - (xx + zz);
        transform->m[1][2] = yz - wx;
        transform->m[2][0] = xz - wy;
        transform->m[2][1] = yz + wx;
        transform->m[2][2] = 1.0f - (xx + yy);
        for (u32 row = 0; row < 3; ++row) {
            if (rowLengthSquared(transform->m[row]) < g_nodeMinimumBasisLengthSquared) {
                return 0;
            }
        }
        transform->flags |= NODE_FLAG_TRANSFORM_DIRTY;
    }
    return 1;
}
