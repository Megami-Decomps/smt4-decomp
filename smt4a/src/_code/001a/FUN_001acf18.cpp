/* NON_MATCHING: retail copies the vertex template from a shared constant table (DAT_0053d500 + 0x130 / +0x150); the local initializer here gets its own .constdata copy */
#include "common.h"

struct Vertex {
    f32 z;      // 0x00
    u32 tag;    // 0x04
    f32 y;      // 0x08
    f32 x;      // 0x0C
};

extern "C" {

void FUN_001b4120(Vertex *vertices, u32 size);

/* Builds a three-vertex primitive from the given points (the third has no depth, at z = 0.5) and submits it. */
void FUN_001acf18(const f32 *first, const f32 *second, const f32 *third)
{
    Vertex vertices[3] = {
        {0.0f, 0x802F0233, 0.0f, 0.0f},
        {0.0f, 0x802F0233, 0.0f, 0.0f},
        {0.5f, 0x802F0233, 0.0f, 0.0f},
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
