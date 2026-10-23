/* NON_MATCHING: index loop is unrolled and multiply/stack/register allocation differs from retail. */
#include "gfx/TiledIndexMesh.h"

extern "C" {
TiledIndexMesh *FUN_002ce938(s32 rows, s32 verticesPerRow, s32 trianglesPerRow, u32 flags);

// Replicate a triangle pattern across a grid whose adjacent cells share a vertex column.
TiledIndexMesh *FUN_00390164(s32 rows, s32 columns, const u16 *pattern, s32 verticesPerColumn, u32 flags)
{
    s32 trianglesPerCell = verticesPerColumn * 2 - 2;
    TiledIndexMesh *mesh = FUN_002ce938(rows, (s16)((columns + 1) * verticesPerColumn),
                                     (s16)(columns * trianglesPerCell), flags);
    u16 *indices = mesh->storage->indices;
    s32 patternTriangles = (trianglesPerCell * 3 + 2) / 3;
    s32 patternIndexCount = patternTriangles * 3;
    s32 rowStride = (columns + 1) * verticesPerColumn;
    for (s32 row = 0; row < rows; ++row) {
        for (s32 column = 0; column < columns; ++column) {
            const u16 *source = pattern;
            u16 *destination = indices + patternTriangles * (columns * row * 3 + column * 3);
            for (s32 i = 0; i < patternIndexCount; ++i) {
                *destination++ = *source++ + rowStride * row + verticesPerColumn * column;
            }
        }
    }
    return mesh;
}
}
