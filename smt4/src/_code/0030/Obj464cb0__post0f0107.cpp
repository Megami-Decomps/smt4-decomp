#include "classes/Obj464cb0.h"

#include "camp/RenderCtxTitle.h"

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void renderStatesSubmitCached(s32 arg);
extern u32 *g_modelCommandBuffer;
extern s32 g_modelCommandWordCount;
}

static void commandQueuePushPair(u32 first, u32 second)
{
    g_modelCommandBuffer[g_modelCommandWordCount] = first;
    g_modelCommandBuffer[g_modelCommandWordCount + 1] = second;
    g_modelCommandWordCount += 2;
}

/* Posts this object combined with the current state of render stack A (bits 8-11 cleared), and message id 0xf0107. */
void Obj464cb0::post0f0107()
{
    cursorResetFromParam();
    u32 word = renderCtxStackTop(g_titleScene, RENDER_STACK_A) & 0xfffff0ff;
    commandQueuePushPair(word | (u32)this, 0xf0107);
    asdModelCommandBlockRelease();
    renderStatesSubmitCached(1);
}
