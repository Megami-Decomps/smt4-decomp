/* NON_MATCHING: basis-length load grouping, flag guard and shared epilogue differ from retail. */
#include "shard/W4_Match1b_Node.h"

extern "C" const f32 g_nodeMinimumBasisLengthSquared;

static __inline f32 basisLengthSquared(const f32 *row)
{
    return row[0] * row[0] + row[1] * row[1] + row[2] * row[2];
}

/* Replace a degenerate rotation basis with the fallback basis, or with identity. */
extern "C" void FUN_0036a474(NodeTransform *transform, s32 useFallback,
                            const NodeTransform *fallback)
{
    u32 flags = transform->flags;
    if ((~flags & 0x10) == 0) {
        return;
    }
    if (basisLengthSquared(transform->m[0]) < g_nodeMinimumBasisLengthSquared ||
        basisLengthSquared(transform->m[1]) < g_nodeMinimumBasisLengthSquared ||
        basisLengthSquared(transform->m[2]) < g_nodeMinimumBasisLengthSquared) {
        if (useFallback == 0) {
            transform->m[0][0] = 1.0f;
            transform->m[1][0] = 0.0f;
            transform->m[2][0] = 0.0f;
            transform->m[0][1] = 0.0f;
            transform->m[1][1] = 1.0f;
            transform->m[2][1] = 0.0f;
            transform->m[0][2] = 0.0f;
            transform->m[1][2] = 0.0f;
            transform->m[2][2] = 1.0f;
        } else {
            transform->m[0][0] = fallback->m[0][0];
            transform->m[1][0] = fallback->m[1][0];
            transform->m[2][0] = fallback->m[2][0];
            transform->m[0][1] = fallback->m[0][1];
            transform->m[1][1] = fallback->m[1][1];
            transform->m[2][1] = fallback->m[2][1];
            transform->m[0][2] = fallback->m[0][2];
            transform->m[1][2] = fallback->m[1][2];
            transform->m[2][2] = fallback->m[2][2];
        }
        transform->flags = flags | 0x800;
    }
}
