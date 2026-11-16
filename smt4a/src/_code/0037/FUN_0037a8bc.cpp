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
extern u32 *g_modelCommandBuffer; /* model command buffer */
extern int g_modelCommandWordCount;  /* words used in the buffer */

void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);

/* Queue command 0xF0065 with `enable`; when enabled, also queue the current color and depth buffers. */
void FUN_0037a8bc(u32 enable)
{
    cursorResetFromParam();
    g_modelCommandBuffer[g_modelCommandWordCount] = enable;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = 0xF0065;
    g_modelCommandWordCount += 2;
    if (enable) {
        g_modelCommandBuffer[g_modelCommandWordCount] = g_renderCtx->buffers[10].addresses[g_renderCtx->buffers[10].current];
        g_modelCommandBuffer[g_modelCommandWordCount + 1] = 0xF0066;
        g_modelCommandWordCount += 2;
        g_modelCommandBuffer[g_modelCommandWordCount] = g_renderCtx->buffers[11].addresses[g_renderCtx->buffers[11].current];
        g_modelCommandBuffer[g_modelCommandWordCount + 1] = 0xF0067;
        g_modelCommandWordCount += 2;
    }
    asdModelCommandBlockRelease();
}

} /* extern "C" */
