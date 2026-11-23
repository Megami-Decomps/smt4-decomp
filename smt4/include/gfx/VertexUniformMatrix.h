/* Vertex-shader float-uniform matrix uploads (Shin Megami Tensei IV): a uniform-index register write (0x2C0)
 * selecting the first register, then the matrix rows written by FUN_0023ae58 (4x4) as uniform data (0x2C1).
 * Apocalypse's gfx/VertexUniformMatrix.h has the same helper and its 3x4 sibling. */
#ifndef SMT4_GFX_VERTEXUNIFORMMATRIX_H
#define SMT4_GFX_VERTEXUNIFORMMATRIX_H

#include "common.h"

extern "C" {
/* Writes a 4x4 matrix's uniform data (the 0xFF02C1 header, 16 words and a pad word: 18 words) at `commands`. */
void FUN_0023ae58(u32 *commands, const f32 *matrix, u32 header);
/* Writes a 3x4 matrix's uniform data (the 0xBF02C1 header, 12 words and a pad word: 14 words) at `commands`. */
void FUN_0023ae1c(u32 *commands, const f32 *matrix, u32 header);
}

/* Appends the uniform-index write for register `index` and a 4x4 matrix at `*cursor`, advancing it. */
static __inline void gpuAppendVertexUniformMatrix4x4(u32 **cursor, u32 index, const f32 *matrix)
{
    u32 *commands = *cursor;
    *commands++ = 0x80000000u | index;
    *commands++ = 0x000F02C0u;
    FUN_0023ae58(commands, matrix, 0x00FF02C1u);
    *cursor = commands + 18;
}

/* Appends the uniform-index write for register `index` and a 3x4 matrix at `*cursor`, advancing it. */
static __inline void gpuAppendVertexUniformMatrix3x4(u32 **cursor, u32 index, const f32 *matrix)
{
    u32 *commands = *cursor;
    *commands++ = 0x80000000u | index;
    *commands++ = 0x000F02C0u;
    FUN_0023ae1c(commands, matrix, 0x00BF02C1u);
    *cursor = commands + 14;
}

#endif
