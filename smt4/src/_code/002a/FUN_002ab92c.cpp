/* NON_MATCHING: the command headers are stored with post-indexed str/strd here; retail stores [cmd + 4] and [cmd] then adds 8, deriving the second header from the first. */
#include "common.h"

extern "C" {

typedef struct ShaderMatrixOwner {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ void *source; // last source uploaded
} ShaderMatrixOwner;

typedef struct ShaderMatrixSource {
    /* 0x000 */ u8 unk000[0x148];
    /* 0x148 */ u8 matrix34[0x60];
    /* 0x1A8 */ u8 matrix44[0x40];
} ShaderMatrixSource;

extern u32 *g_commandBufferCursor;

void FUN_002a1828(u32 *command, const void *matrix, u32 header);
void FUN_002a18ac(u32 *command, const void *matrix, u32 header);

/* Writes a 3x4 matrix upload starting at uniform register `reg`. */
static __inline void cmdPutMatrix34(u32 reg, const void *matrix)
{
    g_commandBufferCursor[1] = 0x000F0000 | reg;
    g_commandBufferCursor[0] = 0x8000005A;
    FUN_002a1828(g_commandBufferCursor + 2, matrix, 0x00BF0000 | (reg + 1));
    g_commandBufferCursor += 16;
}

/* Writes a 4x4 matrix upload starting at uniform register `reg`. */
static __inline void cmdPutMatrix44(u32 reg, const void *matrix)
{
    g_commandBufferCursor[1] = 0x000F0000 | reg;
    g_commandBufferCursor[0] = 0x80000056;
    FUN_002a18ac(g_commandBufferCursor + 2, matrix, 0x00FF0000 | (reg + 1));
    g_commandBufferCursor += 20;
}

/* Uploads the source's matrices to both shader stages when it changed (or when forced). */
void FUN_002ab92c(ShaderMatrixOwner *owner, ShaderMatrixSource *source, s32 force)
{
    if (owner->source == source && force == 0) {
        return;
    }
    owner->source = source;
    cmdPutMatrix34(0x2C0, source->matrix34);
    cmdPutMatrix44(0x2C0, source->matrix44);
    cmdPutMatrix34(0x290, source->matrix34);
    cmdPutMatrix44(0x290, source->matrix44);
}

} /* extern "C" */
