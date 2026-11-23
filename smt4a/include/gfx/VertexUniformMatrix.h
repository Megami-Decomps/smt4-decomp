/* Vertex-shader float-uniform matrix uploads (Apocalypse): a uniform-index register write (0x2C0) selecting the
 * first register, then the matrix rows written by FUN_0019a2ac (4x4) or FUN_0019a270 (3x4) as uniform data
 * (0x2C1). gpuWriteVertexUniformMatrix, the model draw modelUploadStereoMatrices and the model command upload FUN_00157c3c
 * append them the same way. */
#ifndef SMT4A_GFX_VERTEXUNIFORMMATRIX_H
#define SMT4A_GFX_VERTEXUNIFORMMATRIX_H

#include "common.h"

extern "C" {
/* Writes a 4x4 matrix's uniform data (the 0xFF02C1 header, 16 words and a pad word: 18 words) at `commands`. */
void FUN_0019a2ac(u32 *commands, const f32 *matrix, u32 header);
/* Writes a 3x4 matrix's uniform data (the 0xBF02C1 header, 12 words and a pad word: 14 words) at `commands`. */
void FUN_0019a270(u32 *commands, const f32 *matrix, u32 header);
}

/* Appends the uniform-index write for register `index` and a 4x4 matrix at `*cursor`, advancing it. */
static __inline void gpuAppendVertexUniformMatrix4x4(u32 **cursor, u32 index, const f32 *matrix)
{
    u32 *commands = *cursor;
    *commands++ = 0x80000000u | index;
    *commands++ = 0x000F02C0u;
    FUN_0019a2ac(commands, matrix, 0x00FF02C1u);
    *cursor = commands + 18;
}

/* Appends the uniform-index write for register `index` and a 3x4 matrix at `*cursor`, advancing it. */
static __inline void gpuAppendVertexUniformMatrix3x4(u32 **cursor, u32 index, const f32 *matrix)
{
    u32 *commands = *cursor;
    *commands++ = 0x80000000u | index;
    *commands++ = 0x000F02C0u;
    FUN_0019a270(commands, matrix, 0x00BF02C1u);
    *cursor = commands + 14;
}

#endif
