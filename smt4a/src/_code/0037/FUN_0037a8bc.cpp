/* NON_MATCHING: retail addresses the render buffer sets as ctx + 0x140/0x160 with a 0x11F8 pool offset and fewer saved registers; the build folds the constant indices. */
#include "common.h"

extern "C" {

typedef struct RenderBufferSet {
    /* 0x00 */ s32 current;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 addresses[6];
} RenderBufferSet;

typedef struct RenderCtx {
    /* 0x0000 */ u8 unk0000[0x11F8];
    /* 0x11F8 */ RenderBufferSet buffers[12]; /* 10: color, 11: depth */
} RenderCtx;

extern RenderCtx *g_renderCtx;
extern u32 *DAT_005b3fe4; /* model command buffer */
extern int DAT_005b3fe8;  /* words used in the buffer */

void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);

/* Queue command 0xF0065 with `enable`; when enabled, also queue the current color and depth buffers. */
void FUN_0037a8bc(u32 enable)
{
    cursorResetFromParam();
    DAT_005b3fe4[DAT_005b3fe8] = enable;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xF0065;
    DAT_005b3fe8 += 2;
    if (enable) {
        DAT_005b3fe4[DAT_005b3fe8] = g_renderCtx->buffers[10].addresses[g_renderCtx->buffers[10].current];
        DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xF0066;
        DAT_005b3fe8 += 2;
        DAT_005b3fe4[DAT_005b3fe8] = g_renderCtx->buffers[11].addresses[g_renderCtx->buffers[11].current];
        DAT_005b3fe4[DAT_005b3fe8 + 1] = 0xF0067;
        DAT_005b3fe8 += 2;
    }
    asdModelCommandBlockRelease();
}

} /* extern "C" */
