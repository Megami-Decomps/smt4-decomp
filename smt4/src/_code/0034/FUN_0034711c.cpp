/* NON_MATCHING: attribute helper and ternary tangent now match retail except one register (retail adds the running sum into r2, the build into r1). */
#include "common.h"

struct VertexLayout {
    u8 unk00[4];     // 0x00
    u32 attributes;  // 0x04
    u8 unk08[4];     // 0x08
    s32 count;       // 0x0C
};

extern "C" {

/* Bytes of one vertex attribute stream: `stride` bytes per vertex when the layout enables it. */
static __inline s32 attributeBytes(const VertexLayout *layout, u32 mask, s32 stride)
{
    s32 enabled = layout->attributes & mask;
    if (enabled) {
        enabled = layout->count * stride;
    }
    return enabled;
}

/* Size in bytes of a vertex buffer for `count` vertices with the attributes the layout enables. */
s32 FUN_0034711c(const VertexLayout *layout)
{
    s32 position = attributeBytes(layout, 1, 12);
    s32 color = attributeBytes(layout, 2, 16);
    s32 sum = color + position;
    sum += attributeBytes(layout, 0x20, 4);
    sum += attributeBytes(layout, 4, 8);
    s32 normal = attributeBytes(layout, 8, 12);
    s32 tangent = (layout->attributes & 0x10) ? layout->count * 12 : 0;
    return tangent + (normal + sum);
}

} /* extern "C" */
