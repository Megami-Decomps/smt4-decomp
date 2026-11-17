/* NON_MATCHING: scissor-stack address calculation, clamp registers and branch layout differ. */
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
void FUN_00399ab4(u32 origin)
{
    u32 width = FUN_00169d8c(asdGxGetPresetIndex());
    u32 height = FUN_00169db4(asdGxGetPresetIndex());
    cursorResetFromParam();
    u32 *buffer = g_modelCommandBuffer;
    u32 minimum;
    u32 maximum;
    if (g_renderCtx->scissor.entries[g_renderCtx->scissor.count] != 0) {
        u32 top = origin >> 16;
        u32 left = origin & 0xFFFF;
        u32 clampedTop = top;
        if (height <= top)
            clampedTop = height - 1;
        u32 clampedLeft = left;
        if (width <= left)
            clampedLeft = width - 1;
        minimum = clampedTop | (clampedLeft << 16);
        u32 extent = g_renderCtx->scissorMaximum.entries[g_renderCtx->scissorMaximum.count];
        u32 bottom = top + (extent >> 16) - 1;
        if (static_cast<s32>(bottom) < 0)
            bottom = 0;
        else if (height <= bottom)
            bottom = height - 1;
        left += extent & 0xFFFF;
        u32 right = left - 1;
        u32 rightWord;
        if (static_cast<s32>(right) < 0) {
            rightWord = 0;
        } else {
            if (right < width)
                width = left;
            rightWord = (width - 1) << 16;
        }
        maximum = bottom | rightWord;
    } else {
        minimum = 0;
        maximum = (height - 1) | ((width - 1) << 16);
    }
    g_modelCommandBuffer[g_modelCommandWordCount] = minimum;
    buffer[g_modelCommandWordCount + 1] = 0xF0066;
    g_modelCommandWordCount += 2;
    buffer[g_modelCommandWordCount] = maximum;
    buffer[g_modelCommandWordCount + 1] = 0xF0067;
    g_modelCommandWordCount += 2;
    asdModelCommandBlockRelease();
}
}
