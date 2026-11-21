/* NON_MATCHING: 20 lines: retail extracts the extent's width (uxth) after the first bottom compare and keeps the command in r0, the bottom in r2. */
#include "shard/W6_W6Match6_ItemIcon.h"
#include "camp/RenderCtxTitle.h"
#include "shard/S1ListPanel.h"

extern "C" {
s32 asdGxGetCurrentPresetKind(void);
u32 FUN_002ae1e8(u32 kind);
void cursorResetFromParam(void);
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;

/* Emits the scissor's inclusive maximum: the current origin plus `extent`, clamped to the active viewport. */
void gxEmitScissorMaximum(u32 extent)
{
    u32 width = FUN_002ae210(asdGxGetCurrentPresetKind());
    u32 height = FUN_002ae1e8(asdGxGetCurrentPresetKind());
    cursorResetFromParam();
    u32 command;
    if (renderCtxIvGetStateStackTop(g_titleScene, RENDER_STACK_SCISSOR) == 0) {
        command = 0;
    } else {
        u32 origin = renderCtxIvGetStateStackTop(g_titleScene, RENDER_STACK_SCISSOR_MINIMUM);
        u32 top = origin >> 16;
        u16 left = origin;
        u16 extentWidth = extent;
        /* The last row and column, clamped to the viewport (each written out in full at every use). */
        u32 bottom = (s32)(top + (extent >> 16) - 1) < 0 ? 0
                   : (s32)(top + (extent >> 16) - 1) >= height ? height - 1
                   : (s32)(top + (extent >> 16) - 1);
        u32 rightWord = (s32)(left + extentWidth - 1) < 0 ? 0
                      : ((s32)(left + extentWidth - 1) >= width ? width - 1 : (s32)(left + extentWidth - 1)) << 16;
        command = bottom | rightWord;
    }
    u32 *buffer = g_modelCommandBuffer;
    g_modelCommandBuffer[g_modelCommandWordCount] = command;
    buffer[g_modelCommandWordCount + 1] = 0xF0067;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
