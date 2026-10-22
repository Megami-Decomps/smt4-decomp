/* NON_MATCHING: grid index generation uses a different stack frame and multiply/index register allocation. */
/* Builds grid-cell indices by replicating a triangle pattern with each cell's vertex offset. */
#include "gfx/TiledIndexMesh.h"

extern "C" {
TiledIndexMesh *FUN_002ce938(s32 rows, s32 verticesPerRow, s32 trianglesPerRow, u32 flags);

TiledIndexMesh *FUN_00337f9c(s32 rows, s32 columns, s32 trianglesPerCell, s16 vertexStride,
                           const u16 *pattern, u32 flags)
{
    s16 columnCount = (s16)columns;
    TiledIndexMesh *mesh = FUN_002ce938(rows, (s16)(columnCount * vertexStride),
                                      (s16)(columnCount * (s16)trianglesPerCell), flags);
    u16 *indices = mesh->storage->indices;
    s32 indexCount = trianglesPerCell * 3;
    s32 groups = (indexCount + 2) / 3;
    s16 rowStride = columnCount * vertexStride;
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
