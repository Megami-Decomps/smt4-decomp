#include "title/titleMain.h"
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
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32, u32);
void FUN_001835b4(s32, s32, s32, s32, s32, s32);
void FUN_0036b21c();

u32 drawTitleModeOverlay()
{
    TitleMain *title = g_titleMain.title;
    title->freeOnEnd = 1;
    const TitleRenderState *state = (const TitleRenderState *)title;
    if (state->hidden || !state->ready)
        return 0;
    switch (state->mode) {
    case 3:
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        FUN_001835b4(2, 0x2a, 6000, 0, 0, 0xb);
        renderStackPop(&g_renderCtx->stackA);
        break;
    case 4:
        renderCtxPushA(g_renderCtx, FUN_001692ac(1, 0));
        FUN_001835b4(2, 0x2a, 7000, 0, 0, 0xb);
        renderStackPop(&g_renderCtx->stackA);
        break;
    case 6:
    case 14:
        break;
    case 7:
        FUN_0036b21c();
        break;
    default:
        FUN_0036b21c();
        break;
    }
    return 0;
}
}
