/* NON_MATCHING: grid index generation uses a different stack frame and multiply/index register allocation. */
/* Builds grid-cell indices by replicating a triangle pattern with each cell's vertex offset. */
#include "gfx/TiledIndexMesh.h"

extern "C" {
TiledIndexMesh *FUN_00207498(s32 rows, s32 verticesPerRow, s32 trianglesPerRow, u32 flags);

TiledIndexMesh *FUN_002d1480(s32 rows, s32 columns, s32 trianglesPerCell, s16 vertexStride,
                           const u16 *pattern, u32 flags)
{
    TiledIndexMesh *mesh = FUN_00207498(rows, (s16)(columns * vertexStride),
                                      (s16)(columns * trianglesPerCell), flags);
    u16 *indices = mesh->storage->indices;
    s32 indexCount = trianglesPerCell * 3;
    s32 groups = (indexCount + 2) / 3;
    s32 rowStride = columns * vertexStride;
    for (s32 row = 0; row < rows; ++row) {
        for (s32 column = 0; column < columns; ++column) {
            const u16 *source = pattern;
            u16 *destination = indices + groups * (columns * row * 3 + column * 3);
            for (s32 i = 0; i < groups * 3; ++i) {
                *destination++ = *source++ + rowStride * (s16)row + vertexStride * (s16)column;
            }
        }
    }
    return mesh;
}
}
