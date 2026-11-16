/* NON_MATCHING: control flow and the command pair writes match retail; retail forms the render-state address as (ctx + 0xA0) + 0x11F8 (count) + 4096 + 512 (entry) through a pooled 0x11F8 offset, which the typed stackG path does not reproduce. */
#include "camp/RenderCtx.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern RenderCtxA *g_renderCtx;
extern u32 *g_modelCommandBuffer; /* model command buffer */
extern s32 g_modelCommandWordCount;  /* words used in the buffer */
}

static __inline void commandQueuePushPair(u32 first, u32 second)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = first;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = second;
    g_modelCommandWordCount += 2;
}

/* Posts the word's flags merged with the current render state (id 0xf0107), then its 3-bit mode
 * field (0, 1, 2 for modes 6/7, else 3) shifted into the top byte (id 0x80126). */
extern "C" void _ZN9Obj464cb016postSelectedWordEv(u32 word)
{
    cursorResetFromParam();
    RenderStateStack *stack = &g_renderCtx->additional.stackG;
    commandQueuePushPair(stack->entries[stack->count] | (word & 0xfffff0ff), 0xf0107);
    u32 mode = (word & 0x70) >> 4;
    if (mode != 0 && mode != 1) {
        if (mode == 6 || mode == 7) {
            mode = 2;
        } else {
            mode = 3;
        }
    }
    commandQueuePushPair(mode << 24, 0x80126);
    asdModelCommandBlockRelease();
    FUN_003c8538(1);
}
