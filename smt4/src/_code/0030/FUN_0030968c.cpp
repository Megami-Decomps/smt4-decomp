/* NON_MATCHING: the stack addressing (stacks[5] from scene + 0xA0 and the pooled 0x11EC) and the command pairs match;
 * retail computes flags & ~0xF00 into r3 and loads the 0xF0107 id into ip, the build swaps the two. */
#include "camp/RenderCtxTitle.h"

/* unit-local: the title scene's draw context seen as its array of render-state stacks (from 0x11EC: D, E, F,
 * A, C, G, B; RenderCtx names them one by one). */
struct TitleSceneStacks {
    /* 0x0000 */ u8 unk0000[0x11EC];
    /* 0x11EC */ RenderStateStack stacks[7];
};

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

/* The current (top) state of render-state stack `index`. */
static __inline u32 renderStackTop(RenderCtx *context, s32 index)
{
    return ((TitleSceneStacks *)context)->stacks[index].entries[((TitleSceneStacks *)context)->stacks[index].count];
}

/* Emits the blend state (render stack G with `flags` outside bits 8-11) and the alpha mode the flags select. */
extern "C" void FUN_0030968c(u32 flags)
{
    cursorResetFromParam();
    commandQueuePushPair(renderStackTop(g_titleScene, 5) | (flags & ~0xF00), 0xF0107);
    u32 alphaMode = (flags & 0x70) >> 4;
    if (alphaMode != 0 && alphaMode != 1) {
        alphaMode = alphaMode == 6 || alphaMode == 7 ? 2 : 3;
    }
    commandQueuePushPair(alphaMode << 24, 0x80126);
    asdModelCommandBlockRelease();
    renderStatesSubmitCached(1);
}
