/* NON_MATCHING: only register allocation differs (retail reuses r2/r3 for the terms and the running sum) */
#include "common.h"

struct VertexLayout {
    u8 unk00[4];     // 0x00
    u32 attributes;  // 0x04
    u8 unk08[4];     // 0x08
    s32 count;       // 0x0C
};

extern "C" {

/* Size in bytes of a vertex buffer for `count` vertices with the attributes the layout enables. */
s32 FUN_0034711c(const VertexLayout *layout)
{
    u32 attributes = layout->attributes;
    s32 position = attributes & 1;
    s32 color;
    s32 texCoord0;
    s32 texCoord1;
    s32 normal;
    s32 tangent;
    s32 sum;

    if (position) {
        position = layout->count * 12;
    }
    color = attributes & 2;
    if (color) {
        color = layout->count * 16;
    }
    sum = color + position;
    texCoord0 = attributes & 0x20;
    if (texCoord0) {
        texCoord0 = layout->count * 4;
    }
    sum += texCoord0;
    texCoord1 = attributes & 4;
    if (texCoord1) {
        texCoord1 = layout->count * 8;
    }
    sum += texCoord1;
    normal = attributes & 8;
    if (normal) {
        normal = layout->count * 12;
    }
    tangent = attributes & 0x10;
    if (tangent) {
        tangent = layout->count * 12;
    }
    return tangent + (normal + sum);
}

} /* extern "C" */
