#include "title/titleMain.h"
#include "camp/RenderCtxA.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

struct TitleRenderState {
    u8 unk00[0x10];
    u8 hidden;
    u8 unk11[0x4f];
    u8 ready;
    u8 unk61[0x17];
    s32 mode;
};
extern "C" {
extern TitleMainGlobals g_titleMain;
void titleMainDraw();

u32 titleDrawModeOverlay()
{
    TitleMain *title = g_titleMain.title;
    title->freeOnEnd = 1;
    const TitleRenderState *state = (const TitleRenderState *)title;
    if (state->hidden || !state->ready)
        return 0;
    switch (state->mode) {
    case 3:
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
        texDrawTableEntryAtStoredOrigin(2, 0x2a, 6000, 0, 0, 0xb);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        break;
    case 4:
        renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
        texDrawTableEntryAtStoredOrigin(2, 0x2a, 7000, 0, 0, 0xb);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        break;
    case 6:
    case 14:
        break;
    case 7:
        titleMainDraw();
        break;
    default:
        titleMainDraw();
        break;
    }
    return 0;
}
}
