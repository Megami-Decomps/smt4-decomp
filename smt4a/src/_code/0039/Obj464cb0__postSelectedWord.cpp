/* NON_MATCHING: the stack addressing (stacks[5] from ctx + 0xA0 and the pooled 0x11F8) and the command pairs match; retail
 * computes this & ~0xF00 into r3 and loads the 0xf0107 id into ip, the build swaps the two. */
#include "classes/Obj464cb0.h"

#include "camp/RenderCtxA.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void renderStatesSubmitCached(s32 arg);
extern u32 *g_modelCommandBuffer; /* model command buffer */
extern s32 g_modelCommandWordCount;  /* words used in the buffer */
}

static void commandQueuePushPair(u32 first, u32 second)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = first;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = second;
    g_modelCommandWordCount += 2;
}

/* Posts this object's flags merged with the current state of render stack G (id 0xf0107), then its 3-bit mode
 * field (0, 1, 2 for modes 6/7, else 3) shifted into the top byte (id 0x80126). */
void Obj464cb0::postSelectedWord()
{
    cursorResetFromParam();
    commandQueuePushPair(renderCtxStackTop(g_renderCtx, RENDER_STACK_G) | ((u32)this & 0xfffff0ff), 0xf0107);
    u32 mode = ((u32)this & 0x70) >> 4;
    if (mode != 0 && mode != 1) {
        if (mode == 6 || mode == 7) {
            mode = 2;
        } else {
            mode = 3;
        }
    }
    commandQueuePushPair(mode << 24, 0x80126);
    asdModelCommandBlockRelease();
    renderStatesSubmitCached(1);
}
