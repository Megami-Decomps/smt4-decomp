/* NON_MATCHING: shared vertex templates are restored; the compiler copies the first two vertices separately rather than as retail's single 32-byte block. */
#include "shard/TextureCommandTemplates.h"
#include <stddef.h>

struct Vertex {
    f32 z;      // 0x00
    u32 tag;    // 0x04
    f32 y;      // 0x08
    f32 x;      // 0x0C
};

struct PrimitiveTriangleTemplates : TextureCommandTemplates {
    u8 unk0E8[0x48];
    Vertex triangle[3]; // 0x130
};
typedef char PrimitiveTriangleTemplatesOffsetCheck[
    offsetof(PrimitiveTriangleTemplates, triangle) == 0x130 ? 1 : -1];

extern "C" {

extern const PrimitiveTriangleTemplates DAT_0053d500;
void FUN_001b4120(Vertex *vertices, u32 size);

/* Builds a three-vertex primitive from the given points (the third has no depth, at z = 0.5) and submits it. */
void FUN_001acf18(const f32 *first, const f32 *second, const f32 *third)
{
    Vertex vertices[3] = {
        DAT_0053d500.triangle[0],
        DAT_0053d500.triangle[1],
        DAT_0053d500.triangle[2]
    };

    vertices[0].z = first[2];
    vertices[0].y = first[1];
    vertices[0].x = first[0];
    vertices[1].z = second[2];
    vertices[1].y = second[1];
    vertices[1].x = second[0];
    vertices[2].y = third[1];
    vertices[2].x = third[0];
    FUN_001b4120(vertices, sizeof(vertices));
}

} /* extern "C" */
