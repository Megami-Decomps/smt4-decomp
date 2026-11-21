/* NON_MATCHING: the stack addressing (stacks[5] from scene + 0xA0 and the pooled 0x11EC) and the command pairs match;
 * retail computes flags & ~0xF00 into r3 and loads the 0xF0107 id into ip, the build swaps the two. */
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

/* Emits the blend state (render stack G with `flags` outside bits 8-11) and the alpha mode the flags select. */
extern "C" void FUN_0030968c(u32 flags)
{
    cursorResetFromParam();
    commandQueuePushPair(renderCtxStackTop(g_titleScene, RENDER_STACK_G) | (flags & ~0xF00), 0xF0107);
    u32 alphaMode = (flags & 0x70) >> 4;
    if (alphaMode != 0 && alphaMode != 1) {
        alphaMode = alphaMode == 6 || alphaMode == 7 ? 2 : 3;
    }
    commandQueuePushPair(alphaMode << 24, 0x80126);
    asdModelCommandBlockRelease();
    renderStatesSubmitCached(1);
}
