/* NON_MATCHING: the minimum's clamps and the maximum's right edge allocate differently (retail extracts the extent's width right after loading it and recomputes the right edge with subcs/subcc), and retail derives 0xF0067 from 0xF0066 (orr asr #17). */
#include "shard/S1ListPanel.h"
#include "camp/RenderCtxA.h"
extern "C" {
s32 asdGxGetPresetIndex(void);
u32 FUN_00169d8c(s32 preset);
u32 FUN_00169db4(s32 preset);
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
extern u32 *g_modelCommandBuffer;
extern u32 g_modelCommandWordCount;

/* Emit the scissor origin and inclusive maximum, clamped to the active viewport. */
void gxEmitScissorRect(u32 origin)
{
    u32 width = FUN_00169d8c(asdGxGetPresetIndex());
    u32 height = FUN_00169db4(asdGxGetPresetIndex());
    cursorResetFromParam();
    u32 minimum;
    u32 maximum;
    if (renderCtxStackTop(g_renderCtx, RENDER_STACK_SCISSOR) == 0) {
        minimum = 0;
        maximum = (height - 1) | ((width - 1) << 16);
    } else {
        u32 top = origin >> 16;
        u16 left = origin;
        minimum = (height <= top ? height - 1 : top) | ((left >= width ? width - 1 : left) << 16);
        u32 extent = renderCtxStackTop(g_renderCtx, RENDER_STACK_SCISSOR_MAXIMUM);
        u32 bottom = (s32)(top + (extent >> 16) - 1) < 0 ? 0 : (s32)(top + (extent >> 16) - 1) >= height ? height - 1 : (s32)(top + (extent >> 16) - 1);
        s32 right = left + (u16)extent;
        u32 rightWord;
        if (right - 1 < 0) {
            rightWord = 0;
        } else {
            if (right - 1 >= width)
                right = width;
            rightWord = (right - 1) << 16;
        }
        maximum = bottom | rightWord;
    }
    u32 *buffer = g_modelCommandBuffer;
    buffer[g_modelCommandWordCount] = minimum;
    buffer[g_modelCommandWordCount + 1] = 0xF0066;
    g_modelCommandWordCount += 2;
    buffer[g_modelCommandWordCount] = maximum;
    buffer[g_modelCommandWordCount + 1] = 0xF0067;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
