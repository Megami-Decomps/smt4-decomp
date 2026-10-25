/* NON_MATCHING: mode branch layout and render stack push scheduling differ; -O2 candidate. */
#include "title/titleMain.h"
#include "shard/TextureDrawCall.h"
#include "camp/RenderCtx.h"

struct TitleDrawState {
    u32 job;
    u8 visited; // 0x04
    u8 unk05[0xb];
    u8 blocked; // 0x10
    u8 unk11[0x4f];
    u8 drawable; // 0x60
    u8 unk61[0x17];
    s32 mode; // 0x78
};
extern "C" {
extern TitleMainGlobals g_titleMain;
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(u32, u32);
void FUN_0036b21c();

// Draw the title's mode-specific overlay while temporarily applying its render state.
u32 titleDrawModeOverlay()
{
    TitleDrawState *title = (TitleDrawState *)g_titleMain.title;
    title->visited = 1;
    if (title->blocked || !title->drawable)
        return 0;
    s32 mode = title->mode;
    if (mode == 6)
        return 0;
    if (mode < 7) {
        RenderCtxA *context = g_renderCtx;
        if (mode == 3) {
            s32 state = FUN_001692ac(1, 0);
            renderStackPush(&context->stackA, state);
            FUN_001835b4(2, 0x2a, 6000, 0, 0, 11);
            renderStackPop(&g_renderCtx->stackA);
        } else if (mode == 4) {
            s32 state = FUN_001692ac(1, 0);
            renderStackPush(&context->stackA, state);
            FUN_001835b4(2, 0x2a, 7000, 0, 0, 11);
            renderStackPop(&g_renderCtx->stackA);
        } else {
            FUN_0036b21c();
        }
    } else if (mode != 14) {
        FUN_0036b21c();
    }
    return 0;
}
}
